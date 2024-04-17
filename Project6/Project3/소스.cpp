#include<iostream>
using namespace std;

int main()
{
	bool b0 = 0 == 0;
	bool b1 = 0 < 1;
	bool b2 = 0 > 2;

	cout << "b0: " << b0 << endl;
	cout << "b1: " << b1 << endl;
	cout << "b2: " << b2 << endl;

	// true , false로 표현
	cout.setf(ios_base::boolalpha);
	cout << "b0: " << b0 << endl;
	cout << "b1: " << b1 << endl;
	cout << "b2: " << b2 << endl;

	// if문 내의 ture/false로 사용 가능
	if (b0)
		cout << "b0 true" << endl;
	if (b1)
		cout << "b1 true" << endl;
	if (b2)
		cout << "b2 true" << endl;


}