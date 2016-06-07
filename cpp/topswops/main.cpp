#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void printVector(vector<int> toPrint);

int main() {
	int length, inputs, card, top;
	cin >> length >> inputs;
	vector<int> deck;
	vector<int> answers;

	for (int i=0; i < inputs; i++) {
		deck.clear();
		for (int l=0; l < length; l++) {
			cin >> card;
			deck.push_back(card);
		}

		int count = 0;
		while (true) {
			top = deck[0];
			if (top == 1) {
				answers.push_back(count);
				printVector(deck);
				break;
			} //else {
				//swap
		}
	}

	//for (int i=0; i < answers.size(); i++) {
	//	cout << answers[i] << endl;
	//}
	printVector(answers);

	return 0;
}

void printVector(vector<int> toPrint) {
	for (int i=0; i < toPrint.size(); i++) {
		cout << toPrint[i] << endl;
	}
}

