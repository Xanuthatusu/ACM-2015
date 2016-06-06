cardsindeck = raw_input()
decks = raw_input()

results = []

def game(stri):
	cards = stri.split(" ")
	times = 0
	while cards[0] != '1':
		i2 = cards[0]
		i3 = cards[:int(i2)]
		new_cards = i3[::-1]+cards[int(i2):]
		cards = new_cards
		times += 1
	results.append(times)


for i in range(int(decks)):
	game(raw_input())

for i in range(len(results)):
	print results[i]