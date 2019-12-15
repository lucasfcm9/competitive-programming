#!/usr/bin/env python3

a=list(map(int,input().split()))
a.sort()
ans=0
for i in range(len(a)-1):
	if a[i]==a[i+1]:
		ans+=1
print(ans)

