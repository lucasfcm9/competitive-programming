#!/usr/bin/env python3

n=int(input())
l,ans=[],1
for i in ' '*n:
	s=input()
	l.append(s)
for i in range(len(l)-1):
	ans+=1 if l[i]!=l[i+1] else 0
print(ans)

