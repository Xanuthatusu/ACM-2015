from math import factorial

results = []

def factor(stri):
	inte = int(stri)
	num = factorial(inte)
	results.append(num)
		


for i in range(int(raw_input())):
	factor(raw_input())

for i in range(len(results)):
	print results[i]