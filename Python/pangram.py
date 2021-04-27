def checkPangram(sentence: str) -> str:
	freq = {}
	for char in sentence:
		if char.isalpha():
			freq[char] = freq.get(char, 0) + 1

	length, occurrence = len(freq), list(freq.values()).count(1)

	if length == 26:
		if occurrence == 26:
			return f'PERFECT: {sentence}'
		else:
			return f'PANGRAM: {sentence}'
	else:
		return f'NEITHER: {sentence}'

if __name__ == '__main__':
	sentences = []

	while True:
		sentence = input().strip()
		if sentence[0] == '.':
			break
		sentences.append(sentence)

	# map(lambda x: print(checkPangram(x)), sentences)
	for sentence in sentences:
		print(checkPangram(sentence))