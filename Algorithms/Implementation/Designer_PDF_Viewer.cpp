#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> h;
    for (char i = 'a'; i <= 'z'; i++)
    {
        int a;
        cin >> a;
        h.insert(pair<char, int>(i, a));
    }

    string word;
    cin >> word;

    map<char, int> w;
    for (auto i : word)
    {
        auto it = h.find(i);
        w.insert(*it);
    }

    auto it = max_element(w.begin(), w.end(), [](const pair<char, int> &p1, const pair<char, int> &p2) { return p1.second < p2.second; });

    cout << word.size() * it->second << endl;
}