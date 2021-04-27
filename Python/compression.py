from itertools import groupby

def compressedString(message: str) -> str:
    compressed = str()
    for key, group in groupby(message):
    	reps = list(group)
    	compressed = compressed + key + str(len(reps)) if len(reps) > 1 else compressed + key
    return compressed

if __name__ == '__main__':
	print(compressedString(input()))

