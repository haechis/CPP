#pragma warning(disable: 4996)
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int nums[] = { 1,2,3,4,5 };

	cout << "배열 출력하면, 주소가 나옴" << endl;
	cout << nums << endl;

	int* pNums = nums;
	cout << pNums << endl;

	cout << sizeof(nums) / sizeof(int) << endl;
	
	// 변수의 크기를 사용하므로, int의 크기인 4가 나오는 것임.
	cout << sizeof(pNums) << endl;


	cout << nums << endl;
	cout << &nums << endl;
	cout << &nums[0] << endl;
	// 배열의 이름은 배열의 0번째 원소의 주소를 리턴한다.
	// 배열의 0번째 주소 뿐 아니라, 포인터는 첫번째 우너소의 주소값의 타입을 갖는다.

	// &nums는 타입이 int가 5개인 타입이라서,
	// int* pNums = &nums ; // 이것은 오류가 나는 것임.

	// 아래꺼만 기억하면 될 듯!
    // 같은 내용이며, 배열의 0번째 주소를 리턴한다.
	cout << nums << endl;
	cout << &nums[0] << endl;

	// 포인터에 배열의 연산자 활용 가능
	cout << pNums[0] << endl;
	cout << pNums[1] << endl;
	cout << pNums[2] << endl;

	// 포인터 주소를 출력해보자
	cout << pNums << endl;
	cout << pNums + 1 << endl; // 포인터 타입의 사이즈 만큼 더함.
	cout << pNums + 2 << endl;

	cout << *pNums << endl;
	cout << *(pNums + 1) << endl; // 포인터 타입이 int라서 가능한 것임.
	cout << *(pNums + 2) << endl;

	cout << *nums << endl;
	cout << *(nums + 1) << endl; //마찬가지로, nums는 integer 포인터의 주소값을 반환하고, 1(integer, 4byte) 만큼 주소를 더 간 곳의 값을 리턴
	cout << *(nums + 2) << endl;


	// < 포인터와 문자열>
	char str0[100] = "abcd";
	char* str1 = str0;

	cout << str0 << endl;
	cout << str1 << endl;

	// 포인터로 문자열 변환 시 const로 해야 함. (못 바꾸게)
	const char* str2 = "hello";
	

	// 문자열 상수의 타입을 보자
	cout << typeid("hello").name() << endl; // hello 다섯 글자뒤에 null이 있으니 6이 나옴.

	cout << strlen(str2) << endl;
	strcpy(str0, str2);

	cout << str0 << endl;
	cout << strcmp(str0, str2) << endl;
}