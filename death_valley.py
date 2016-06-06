li = []
for i in range(4):
	n = raw_input()
	li.append(n)

new_li = []
for i in range(len(li)):
	if int(li[i]) > 0:
		new_li.append(10000/int(li[i]))

print new_li