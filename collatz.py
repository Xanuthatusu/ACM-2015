results = []

def think(stri):
	new_stri = int(stri)
	times = 0
	while new_stri != 1:
		if new_stri % 2 == 0:
			new_stri /= 2
			times += 1
		else:
			new_stri *= 3
			new_stri += 1
			times += 1
	results.append(str(stri) + " " + str(times))

while True:
	user = raw_input()
	if user == "0": break
	think(user)

for i in range(len(results)):
	print results[i]