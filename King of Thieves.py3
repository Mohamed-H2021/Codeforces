n,s,r=int(input()),input(),range
print(['no','yes'][any(all(s[i+k*j]=='*'for k in r(5))for i in r(n-4)for j in r(1,(n-i+3)//4))])
