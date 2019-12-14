#!/usr/bin/env python3
n=int(input())
ans=0
for i in range(n):
	a=list(map(int,input().split()))
	if sum(a)>1:
		ans+=1
print(ans)

