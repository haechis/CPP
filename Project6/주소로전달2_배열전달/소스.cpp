#include<iostream>

using namespace std;

/*
<�迭 �Է� �� ���� �� ���� ���.>

void func(int nums[4])
{
	cout << "�迭�� �Է��� ������ Ÿ���� �����ͷ� decay ��..!" << endl;
	cout << "std array Ȥ�� std vector ����� ���� ��." << endl;
	cout << typeid(nums).name() << endl; // 
	// �ȵ�.for (int num : nums)
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

// void func(int argc, char** argv) �̰� ���ٴ�
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
