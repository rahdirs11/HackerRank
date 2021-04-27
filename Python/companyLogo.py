alphabets = [0] * 26

for l in input():
	alphabets[ord(l) - 97] += 1

# alphabets = sorted(alphabets, reverse=True)

for _ in range(3):
	maxI = alphabets.index(max(alphabets))
	print(chr(maxI+97), max(alphabets))
	alphabets[maxI] = 0
