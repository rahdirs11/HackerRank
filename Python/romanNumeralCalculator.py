a, operator, b = input().strip(), input().strip(), input().strip()

def toInt(roman: str) -> int:
	rToi = {
		'I': 1,
		'V': 5,
		'X': 10,
		'L': 50,
		'C': 100,
		'D': 500,
		'M': 1000
	}	
	integer, i = 0, 0
	length = len(roman)
	while i < length:
		if i < length - 1:
			if rToi[roman[i]] < rToi[roman[i + 1]]:
				integer += rToi[roman[i + 1]] - rToi[roman[i]]
				i += 2
			else:
				integer += rToi[roman[i]]
				i += 1
		else:
			integer += rToi[roman[i]]
			i += 1
	return integer


def toRoman(integer: int) -> str:
	values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
	romanEquivalent = ['M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I']
	combination = list(zip(values, romanEquivalent))	
	roman = str()
	i = 0
	while integer:
		count = integer // values[i]
		if count:
			roman += combination[i][-1] * count
		integer %= values[i]
		i += 1
	return roman



# print(f'{toInt(a)} => {toRoman(toInt(a))}')
# print(f'{a} => {toInt(a)}\n{b} => {toInt(b)}')

operations = {
	'+': lambda x, y: x + y,
	'-': lambda x, y: x - y,
	'/': lambda x, y: x // y, # if x % y else x / y, since there are no decimal values in roman in the question
	'*': lambda x, y: x * y
}

print(toRoman(operations[operator](toInt(a), toInt(b))))