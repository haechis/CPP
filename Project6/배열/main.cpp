#include <iostream>

using namespace std;

int main()
{
	// array.
	// attendanceBook[0] ~ attendanceBook[30] 
	bool attendanceBook[31]; // 31개의 boolean을 가지고 있는 출석부를 배열로 만들 수 있음.
	
	// 배열 크기를 정하는 숫자는 항상 상수로 정의해야 함.
	// 다음과 같이 하면 안됨.
	/*
	int arraySize = 5;
	bool arrayTest[arraySize];
	*/

	// 변하지 않는 값인 상수를 써야함.
	const int arraySize = 31;
	bool arrayTest[arraySize];

	// #define 해도 됨. (macro)

	int num[3];
	cout << num[0] << endl; // 쓰레기 값이 나옴!

	// 아래와 같이 하나하나 초기화 가능
	int nums[3];
	nums[0] = 10;
	nums[1] = 10;
	nums[2] = 10;
	cout << nums[0] << endl << nums[1] << endl << nums[2] << endl;

	// 다음과 같이 초기화 가능
	int nums2[3] = { 1,2,3 };
	cout << nums2[0] << endl << nums2[1] << endl << nums2[2] << endl;

	// 다음은 기본값으로 초기화 하는 거
	cout << "int nums[3]{}: 기본값으로 초기화\n";
	int nums3[3]{};
	cout << nums3[0] << endl << nums3[1] << endl << nums3[2] << endl;

	// 이렇게 하면 가장 앞에부터 초기화 하고, 나머지는 기본값으로 초기화가 됨.
	cout << "int nums[4]{1,2}\n";
	int nums4[3]{1,2};
	cout << nums4[0] << endl << nums4[1] << endl << nums4[2] << endl;


	// 사이즈 아는 방법
	cout << "사이즈 아는 방법" << endl;
	cout << sizeof(nums4) <<"byte"<< endl; // integer 3개가 들어가므로 12byte
	// 그래서 배열 개수를 아는 방법은 sizeof 에서 type의 크기로 나눠주면 됨.
	cout << sizeof(nums4) / sizeof(int) << endl;

	// 반복문으로 출력
	cout << "반복문으로 출력\n";
	for (int i = 0; i < 3; i++) {
		cout << nums4[i] << endl;
	}

	// 배열 대입
	int nums0[3]{ 0,1,2 };
	int nums1[3];
	// nums1 = nums0 --> 이렇게 하면 안됨.
	for (int i = 0; i < 3; i++)
	{
		nums1[i] = nums0[i];
	}

	// 두 개다 주소값 이용해서 복사하는 것
	memcpy(nums1, nums0, sizeof(nums0));
	memcpy(&nums1, &nums0, sizeof(nums0));


	// copy(카피해줄 녀석, 범위, 어디로)
	copy(nums0, nums0 + 3, nums1);

	// 
	cout << "순회하면서 한 번만 나오는 녀석 찾기" << endl;
	int nums_test[] = { 1,2,3,4,1,2,3,1,2,3,1,2,3 };
	int result = 0;
	for (int i = 0; i < size(nums_test); i++)
	{
		result ^= nums_test[i]; // XOR 연산자 -> 비트연산자로 계산.
		cout << result << endl;
	}
	cout << result << endl;
	// cout << 2 ^ 2 << endl;

	// 버블소트
	// 순서대로 비교해가며 오름차순 정렬
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