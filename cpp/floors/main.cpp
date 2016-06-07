#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int floor1, floor2, diff;
	cin >> floor1 >> floor2;

	diff = abs(floor1 - floor2);

	if((floor1 > 13 && floor2 < 13) || (floor1 < 13 && floor2 > 13)) {
		diff--;	
	}

	cout << diff << endl;

	return 0;
}

