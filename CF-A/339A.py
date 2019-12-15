#!/usr/bin/env python3
s=input()
l=[]
for i in range(0,len(s),2):
	l.append(s[i])
l.sort()
print('+'.join(l))
