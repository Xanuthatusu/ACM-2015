#include <iostream>
#include <string>

using namespace std;

int main() {
	int width, height;
	cin >> width >> height;

	for(int i=1; i <= height; i++) {
		for(int x=1; x <= width; x++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}

