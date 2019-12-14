#!/usr/bin/env python3
a=list(map(int,input().split()))
s=input()

print(a[0]*s.count('1') + a[1]*s.count('2') + a[2]*s.count('3') + a[3]*s.count('4'))

