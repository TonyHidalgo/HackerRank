n = int(input())
arr = map(int, input().split())
arr = sorted(arr)
x = arr.pop()

if arr.count(x) != 0:
    for i in range(arr.count(x)):
        arr.remove(x)

print(arr.pop())