results = []

def translate(stri):
	li = str(stri).split(" ")
	del li[0]
	string = "*"
	for i in range(len(li)):
		try:
			if li[i] == li[i+1]:
				string += "R"
			elif li[i] > li[i+1]:
				string += "D"
			elif li[i] < li[i+1]:
				string += "U"
		except IndexError:
			pass
	results.append(string)

for i in range(int(raw_input())):
	translate(raw_input())

for i in range(len(results)):
	print results[i]