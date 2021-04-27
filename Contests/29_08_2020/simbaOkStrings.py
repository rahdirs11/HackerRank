from string import ascii_lowercase as asl

for _ in range(int(input())):
	str1 = ''.join(sorted(set(input().strip())))
	print(str1)
	if len(str1) == 26:
		print("Yes" if str1 == asl else "No")
	else:
		print("No")