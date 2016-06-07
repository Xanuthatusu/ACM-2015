#include <iostream>
#include <string>
#include <vector>

using namespace std;

void logic(int);

int main() {
	int number;
	vector<int> numbers;
	while(true) {
		cin >> number;
		if(number == 0) {
			break;
		}
		numbers.push_back(number);
	}

	for(int i=0; i <= numbers.size(); i++) {
		logic(numbers[i]);
	}

	return 0;
}

void logic(int num) {
	bool running = true;
	int orinum = num;
	int passes = 0;

	while(running) {
		if(num == 1) {
			cout << orinum << " " << passes << endl;
			running = false;
		} else if(num % 2 == 0) {
			num /= 2;
		} else {
			num *= 1;
			num++;
		}
		passes++;
	}
}

