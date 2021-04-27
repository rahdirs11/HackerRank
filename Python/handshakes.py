def handshakes(n: int) -> int:
	if n <= 1:
		return 0
	if n == 2:
		return 1
	return n + n * (n - 3) // 2

print(handshakes(int(input())))