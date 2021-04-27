n = int(input())
binN = bin(n)[2: ]
rind, maxLen = int(), 0

while True:
	# print(binN, maxLen)
	rind = binN.find('0')
	if rind == -1:
		if len(binN) > maxLen:
			maxLen = len(binN)
		break
	else:
		if len(binN[: rind]) > maxLen:
			maxLen = len(binN[: rind])
		binN = binN[rind+1: ]
print(maxLen)
