#include <bits/stdc++.h>
using namespace std;

bool is_magic(vector<int> m)
{

    vector<int> s[3];

    // CONSTRUYO MATRIZ
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (i != 0)
                s[i].push_back(m[(i + j) + i * 2]);
            else
                s[i].push_back(m[j]);
        }
    }

    // FILAS
    for (size_t i = 0; i < 3; i++)
    {
        int sum = 0;
        for (size_t j = 0; j < 3; j++)
        {
            sum += s[i][j];
        }
        if (sum != 15)
            return false;
    }

    // COLUMNAS
    for (size_t i = 0; i < 3; i++)
    {
        int sum = 0;
        for (size_t j = 0; j < 3; j++)
        {
            sum += s[j][i];
        }
        if (sum != 15)
            return false;
    }

    //  DIAGONALES
    if (s[0][0] + s[1][1] + s[2][2] != 15 or s[0][2] + s[1][1] + s[2][0] != 15)
        return false;

    return true;
}

vector<vector<int>> generate_matriz()
{
    vector<vector<int>> l;

    vector<int> v(9);
    for (int i = 0; i < 9; ++i)
        v[i] = i + 1;

    do
    {
        if (is_magic(v))
            l.push_back(v);
    } while (next_permutation(v.begin(), v.end()));

    return l;
}

int main()
{
    vector<int> m;
    for (size_t i = 0; i < 3; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        m.push_back(a);
        m.push_back(b);
        m.push_back(c);
    }

    if (is_magic(m))
    {
        cout << "0";
    }
    else
    {
        vector<vector<int>> magicos = generate_matriz();
        vector<int> costos;
        for (auto s : magicos)
        {
            int cost = 0;
            for (size_t i = 0; i < 9; i++)
            {
                cost += abs(s[i] - m[i]);
            }
            costos.push_back(cost);
        }
        sort(costos.begin(), costos.end());
        cout << costos[0] << endl;
    }
}