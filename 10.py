import math

l1, l2 = raw_input().split(" ")

results = []

def think(d,l1,l2):
	num1 = 100 * math.sin(2*math.pi*int(d)/int(l1))
	num2 = 100 * math.sin(2*math.pi*int(d)/int(l2))
	results.append(str(d) + " " + str(int(num1)) + " " + str(int(num2)))

while True:
	d = raw_input()
	if d == "0": break
	think(d,l1,l2)

for i in range(len(results)):
	print results[i]