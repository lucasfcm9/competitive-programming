#!/usr/bin/env python3

n=int(input())
l,p=[],[]
while n>0:
	n-=1
	a,b=list(map(int,input().split()))
	l.append(a)
	p.append(b)
ans=0
for i in l:
	ans+=p.count(i)
print(ans)

