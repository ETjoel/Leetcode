n, k = map(int, input().split())
a = list(map(int, input().strip().split()))
a.sort()
if k == len(a):
    print(a[k - 1])
else:
    if k == 0:
        if a[0] - 1 > 0:
            print(a[0] - 1)
        else:
            print(-1)
    elif a[k] == a[k - 1]:
        print(-1)
    else:
        print(a[k - 1])
