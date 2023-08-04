for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().strip().split()))
    a.sort()
    yes = "YES"
    for i in range(n):
        if i == 0:
            continue
        if a[i] - a[i - 1] > 1:
            yes = "NO"
    print(yes)
   
