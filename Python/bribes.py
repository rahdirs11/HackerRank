def minimumBribes(q: list):
	bribes, isChaotic = 0, False
	i = len(q) - 1
	while i > -1:
		if i + 1 != q[i]:
			if if i - 2 >= 0 and q[i - 2] == q[i]:
				q[i - 2] = q[i - 1]
				q[i - 1] = q[i]
				q[i] = i + 1
				bribes += 2
			elif i - 1 >= 0 and q[i - 1] == q[i]:
				q[i - 1], q[i] = q[i], q[i - 1]
				bribes += 1
			else:
				isChaotic = True
				break
		i -= 1

	print("Too chaotic" if isChaotic else bribes)


if __name__ == '__main__':
	n = int(input())
	q = list(map(int, input().split()))
	minimumBribes(q)
