n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
ans1 = 10**18
for i in range(n):
    c = a[:i]+a[i+1:]
    ans2 = -10**18
    for j in c:
        for k in b:
            ans2 = max(j*k, ans2)
    ans1 = min(ans2, ans1)
print(ans1)
