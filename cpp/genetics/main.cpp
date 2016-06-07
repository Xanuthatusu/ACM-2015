#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef map<char, char> charmap;

int main() {
	string input;
	charmap genes;

	genes['A'] = 'C';
	genes['C'] = 'A';
	genes['G'] = 'T';
	genes['T'] = 'G';

	cin >> input;

	for(int i=0; i < input.size(); i++) {
		cout << genes[input.at(i)];
	}
	cout << endl;

	return 0;
}

