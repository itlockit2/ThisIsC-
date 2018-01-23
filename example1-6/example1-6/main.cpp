#include <iostream>

using namespace std;

int main() {
	int aList[] = { 10,20,30,40,50 };
	for(int j = 0; j < (sizeof(aList) / sizeof(aList[0])) -1 ; j++){
		for (int i = 0; i < (sizeof(aList) / sizeof(aList[0])) -1 ; i++) {
			if (aList[i] < aList[i+1]) {
				int temp = aList[i];
				aList[i] = aList[i + 1];
				aList[i + 1] = temp;
			}
		}
	}

	for (auto number : aList) {
		cout << number << " ";
	}
	cout << endl;
	system("pause");

}