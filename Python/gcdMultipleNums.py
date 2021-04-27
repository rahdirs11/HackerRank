from math import gcd

n = int(input())
numbers = sorted(list(map(int, input().split())))
gCd = 0

for i in range(n-1, 1, -1):
	if numbers[i] % numbers[i-1] == 0:
		gCd = numbers[i-1]
		