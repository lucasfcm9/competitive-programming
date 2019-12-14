#!/usr/bin/env python3

n = int(input())
s = input()

if s.count('A') == s.count('D'):
	print('Friendship')
else:
	print('Anton' if s.count('A') > s.count('D') else 'Danik')

