li = []
def check(stri):
	stri = stri.upper()
	a, b = stri.split(' ')
	if a == b:
		li.append(a + ' and ' + b + ' are the same.')
	else:
		li.append(a + ' and ' + b + ' are different.')


for i in range(int(raw_input())):
	str = raw_input()
	check(str)
		
for i in range(len(li)):
	print li[i]