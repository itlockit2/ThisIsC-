#include <iostream>
#include <string>

int main() {
	std::string name;
	int age;

	std::cout << "enter the name : ";
	std::cin >> name;
	std::cout << "enter tha age : ";
	std::cin >> age;
	std::cout << "my name is " << name << " and " << age << std::endl;
	system("pause");
}