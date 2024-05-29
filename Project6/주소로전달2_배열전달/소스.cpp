#include<iostream>

using namespace std;

/*
<배열 입력 값 전달 시 주의 요망.>

void func(int nums[4])
{
	cout << "배열로 입력을 받으면 타입이 포인터로 decay 됨..!" << endl;
	cout << "std array 혹은 std vector 사용을 권장 함." << endl;
	cout << typeid(nums).name() << endl; // 
	// 안됨.for (int num : nums)
	// {
		// cout << num << endl;
	// }
}

int main()
{
	int nums[4] = { 1,2,3,4 };
	cout << typeid(nums).name() << endl; // 
	func(nums);
}
*/

// void func(int argc, char** argv) 이거 보다는
void func(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
		cout << argv[i] << endl;
}

void func2(int argc, char(*argv)[5])
{
	for (int i = 0; i < argc; i++)
		cout << argv[i] << endl;

}

int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
		cout << argv[i] << endl;

	func(argc, argv);

	char strs[][5] = { "abcd","efgh" };
	func2(2, strs);

}
