#!/usr/bin/env python3
cmd=input()
s=input()
d={}

a='qwertyuiopasdfghjkl;zxcvbnm,./'

if cmd=='R':
	for i in range(1,len(a),1):
		d[a[i]]=a[i-1]
if cmd=='L':
	for i in range(0,len(a)-1,1):
		d[a[i]]=a[i+1]
for i in s:
	print(d[i],end='')
