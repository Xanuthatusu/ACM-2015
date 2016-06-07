#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int inputs, number;
	cin >> inputs;
	vector<int> answers;

	for (int i=0; i < inputs; i++) {
		cin >> number;
		for (int multiplier=number-1; multiplier > 0; multiplier--) {
			number = number * multiplier;
		}
		answers.push_back(number);
	}

	for (int i=0; i < answers.size(); i++) {
		cout << answers[i] << endl;
	}
		
	return 0;
}

