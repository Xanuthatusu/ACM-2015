#include <iostream>
#include <vector>

using namespace std;

int main() {
	int input;
	vector<int> answers;
	while (true) {
		cin >> input;
		if (input == 0) {
			break;
		}
		answers.push_back(10000 / input);
	}

	for (int i=0; i < answers.size(); i++) {
		cout << answers[i] << endl;
	}

	return 0;
}

