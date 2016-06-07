#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int inputs, inputs2, prev, next;
	cin >> inputs;
	string str;
	vector<string> answers;
	
	for (int i=0; i < inputs; i++) {
		cin >> inputs2;
		str = "*";
		for (int x=0; x < inputs2; x++) {
			cin >> next;
			if (x == 0) {
				prev = next;
				continue;
			}
			if (next == prev) {
				str = str + "R";
			} else if (next > prev) {
				str = str + "U";
			} else {
				str = str + "D";
			}
			prev = next;
		}
		answers.push_back(str);
	}

	for (int i=0; i < answers.size(); i++) {
		cout << answers[i] << endl;
	}

	return 0;
}

