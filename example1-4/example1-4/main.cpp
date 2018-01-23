#include <iostream>

using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int number1, number2;
	cout << "enter tha two number" << endl;
	cin >> number1 >> number2;
	cout << "befor change : number1 = " << number1 << " number2 = " << number2 << endl;
	swap(number1, number2);
	cout << "after change : number1 = " << number1 << " number2 = " << number2 << endl;
	system("pause");
}