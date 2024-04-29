#include <iostream>

using namespace std;

int main()
{
	// array.
	// attendanceBook[0] ~ attendanceBook[30] 
	bool attendanceBook[31]; // 31���� boolean�� ������ �ִ� �⼮�θ� �迭�� ���� �� ����.
	
	// �迭 ũ�⸦ ���ϴ� ���ڴ� �׻� ����� �����ؾ� ��.
	// ������ ���� �ϸ� �ȵ�.
	/*
	int arraySize = 5;
	bool arrayTest[arraySize];
	*/

	// ������ �ʴ� ���� ����� �����.
	const int arraySize = 31;
	bool arrayTest[arraySize];

	// #define �ص� ��. (macro)

	int num[3];
	cout << num[0] << endl; // ������ ���� ����!

	// �Ʒ��� ���� �ϳ��ϳ� �ʱ�ȭ ����
	int nums[3];
	nums[0] = 10;
	nums[1] = 10;
	nums[2] = 10;
	cout << nums[0] << endl << nums[1] << endl << nums[2] << endl;

	// ������ ���� �ʱ�ȭ ����
	int nums2[3] = { 1,2,3 };
	cout << nums2[0] << endl << nums2[1] << endl << nums2[2] << endl;

	// ������ �⺻������ �ʱ�ȭ �ϴ� ��
	cout << "int nums[3]{}: �⺻������ �ʱ�ȭ\n";
	int nums3[3]{};
	cout << nums3[0] << endl << nums3[1] << endl << nums3[2] << endl;

	// �̷��� �ϸ� ���� �տ����� �ʱ�ȭ �ϰ�, �������� �⺻������ �ʱ�ȭ�� ��.
	cout << "int nums[4]{1,2}\n";
	int nums4[3]{1,2};
	cout << nums4[0] << endl << nums4[1] << endl << nums4[2] << endl;


	// ������ �ƴ� ���
	cout << "������ �ƴ� ���" << endl;
	cout << sizeof(nums4) <<"byte"<< endl; // integer 3���� ���Ƿ� 12byte
	// �׷��� �迭 ������ �ƴ� ����� sizeof ���� type�� ũ��� �����ָ� ��.
	cout << sizeof(nums4) / sizeof(int) << endl;

	// �ݺ������� ���
	cout << "�ݺ������� ���\n";
	for (int i = 0; i < 3; i++) {
		cout << nums4[i] << endl;
	}

	// �迭 ����
	int nums0[3]{ 0,1,2 };
	int nums1[3];
	// nums1 = nums0 --> �̷��� �ϸ� �ȵ�.
	for (int i = 0; i < 3; i++)
	{
		nums1[i] = nums0[i];
	}

	// �� ���� �ּҰ� �̿��ؼ� �����ϴ� ��
	memcpy(nums1, nums0, sizeof(nums0));
	memcpy(&nums1, &nums0, sizeof(nums0));


	// copy(ī������ �༮, ����, ����)
	copy(nums0, nums0 + 3, nums1);

	// 
	cout << "��ȸ�ϸ鼭 �� ���� ������ �༮ ã��" << endl;
	int nums_test[] = { 1,2,3,4,1,2,3,1,2,3,1,2,3 };
	int result = 0;
	for (int i = 0; i < size(nums_test); i++)
	{
		result ^= nums_test[i]; // XOR ������ -> ��Ʈ�����ڷ� ���.
		cout << result << endl;
	}
	cout << result << endl;
	// cout << 2 ^ 2 << endl;

	// �����Ʈ
	// ������� ���ذ��� �������� ����
	int nums_BS[]{ 5,4,3,1,7,4,3,5,6,1,2 };
	for (int i = 0; i < size(nums_BS); i++)
	{
		for (int j = 0; j < size(nums_BS) - i-1; j++)
		{
			if (nums_BS[j] > nums_BS[j+1])
			{
				int temp = nums_BS[j];
				nums_BS[j] = nums_BS[j+1];
				nums_BS[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < size(nums_BS); i++)
	{
		cout << nums_BS[i] << " ";
	}
	cout << endl;
}