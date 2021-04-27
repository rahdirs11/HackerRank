import numpy as np

n, m = map(int, int(input()))

arr = np.zeros((n, m))

for i in range(n):
	arr[i, :] = map(int, input().split())

print(int(np.max(np.min(arr, axis=1))))