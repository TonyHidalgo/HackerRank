if __name__ == '__main__':
    import builtins

    n = int(input())
    t = tuple(map(int, input().split()))

    print (hash(t))