import math

def lowestTriangle(base, area):
    # Complete this function
    return math.ceil(area * 2 / base)

base, area = input().strip().split(' ')
base, area = [int(base), int(area)]
height = lowestTriangle(base, area)
print(height)