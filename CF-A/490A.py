#!/usr/bin/env python3

p,m,k,posp,posm,posk=[],[],[],[],[],[]

n=int(input())
s=list(map(int,input().split()))
for i in range(len(s)):
	if s[i]==1:
		p.append(s[i])
		posp.append(i)
	if s[i]==2:
		m.append(s[i])
		posm.append(i)
	if s[i]==3:
		k.append(s[i])
		posk.append(i)
res = min(len(p), min(len(m), len(k)))
print(res)
for i in range(0, res):
	print(str(posp[i]+1) + ' ' + str(posm[i]+1) + ' ' + str(posk[i]+1))

