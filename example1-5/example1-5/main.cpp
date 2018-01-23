#include <iostream>

using namespace std;

int main() {
	cout << "상수형 참조가 기존의 참조 형식과 크게 다른점이 무엇인지 답하세요." << endl;
	cout << "기존의 참조 : Init에 대한 읽기, 쓰기 모두 가능" << endl;
	cout << "상수형 참조 : Init에 대한 읽기만 가능->이 역시 원본의 변경을 방지하기 위한 안전장치라고 생각됩니다." << endl;
	cout << "개인적으로는 참조형은 초기화하면서 값이 대입 되기때문에, 간접 지정 처럼 const 의 위치에 따라 상수화의 영향이" << endl;
	cout << "달라지는 \"int const &rData\" 이런  표현은 의미 없다고 생각됩니다." << endl;
	system("pause");
}