#!/usr/bin/env python3

n=int(input())
a=list(map(int,input().split()))
ans,occ=0,0
for i in range(len(a)):
	if a[i]>0:
		ans+=a[i]
	elif ans>0:
		ans-=1
	else:
		occ+=1
print(occ)
	

