#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int num;
	string word1, word2;
	vector<string> answers;
	cin >> num;

	for (int i=0; i < num; i++) {
		cin >> word1 >> word2;
		if (word1 == word2) {
			answers.push_back(word1 + " and " + word2 + " are the same");
		} else {
			answers.push_back(word1 + " and " + word2 + " are different");
		}
	}

	for (int i=0; i < answers.size(); i++) {
		cout << answers[i] << endl;
	}

	return 0;
}

