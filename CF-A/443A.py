#!/usr/bin/env python3
s=set(input())
l=[]
for i in s:
	if i==' ' or i=='{' or i=='}' or i==',':
		continue
	l.append(i)
print(len(l))
