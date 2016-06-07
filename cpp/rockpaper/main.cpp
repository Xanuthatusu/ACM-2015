#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int tests;
	cin >> tests;
	string A, B;
	vector<string> answers;

	for (int i=0; i < tests; i++) {
		cin >> A >> B;
		if (A == "Rock") {
			if (B == "Rock") {
				answers.push_back("tie");
			} else if (B == "Scissors") {
				answers.push_back("A wins");
			} else {
				answers.push_back("B wins");
			}
		} else if (A == "Scissors") {
			if (B == "Rock") {
				answers.push_back("B wins");
			} else if (B == "Scissors") {
				answers.push_back("tie");
			} else {
				answers.push_back("A wins");
			}
		} else {
			if (B == "Rock") {
				answers.push_back("A wins");
			} else if (B == "Scissors") {
				answers.push_back("B wins");
			} else {
				answers.push_back("tie");
			}
		}
	}

	for (int i=0; i < answers.size(); i++) {
		cout << answers[i] << endl;
	}

	return 0;
}

