#include <iostream>

using namespace std;

int main()
{
	// ��Ʈ �����ڿ��� ���������� �ִ�.
	// (1) ~, (2) &, (3) |, (4) ^, (5) >>, (6) <<

	// (1) ~ : Not ������, 
	// 0�� 1��, 1�� 0���� �ٲ��ִ� ������
	int num = 0;
	cout << ~num << endl;
	// ����,
	// 00000000000000000000000000000000 = 0
	// ~(00000000000000000000000000000000) = (11111111111111111111111111111111)
	// 11111111111111111111111111111111 -> twos complement -> 00000000000000000000000000000000 + 1
	// = 00000000000000000000000000000001 ==> 2�� ������ ���Ѱ��� 1�̹Ƿ�, 
	// ==> -1
	// ��, ~0 = -1

	unsigned int num2 = 0;
	cout << ~num2 << endl;
	// ~(00000000000000000000000000000000) = 11111111111111111111111111111111 = 2^(32) - 1

	
	// (2) &
	// 1 & 1 == 1
	// 1 & 0 == 0
	// 0 & 1 == 0
	// 0 & 0 == 0
	cout << "\n& ������" << endl;
	int num2_0 = 5;
	int num2_1 = 10;
	int result = num2_0 & num2_1;
	cout << result << endl;
	// 00000101 & 00001010 == 00000000
	cout << (5 & 11) << endl; // 00000101 & 00001011

	// (4) |: Or ������
	// ture || true == true
	// true || false == true
	// false || true == true
	// false || false == false
	// 1 || 1 == 1
	// 1 || 0 == 1
	// 0 || 1 == 1
	// 0 || 0 == 0

	uint32_t attendanceBook = 0u;
	// attendanceBook = 00000000000000000000000000000000
	// �Ϸ� �⼮�ߴٰ� �ϸ�
	// 0000000000000001
	// ��°�� �⼮�Ϸ���
	// 0000000000000001 + 0000000000000100 = 0000000000000101

	if (!(attendanceBook & (int)pow(2, 0)))// ù������ �⼮�� ��������
	{
		attendanceBook += (int)pow(2, 0); // ù°�� �⼮���� �ٲ��
	}
	cout << attendanceBook << endl;
	
	// �ٸ� �����.
	attendanceBook = 0u; // ���� �ٽ� ����
	attendanceBook |= (int)pow(2, 0); // ù°���� ���ؼ�, ù������ 1�� �������.
	cout << attendanceBook << endl;

	// ù°���� ��°���� �׽�Ʈ
	attendanceBook = 0u; // ���� �ٽ� ����
	attendanceBook |= ((int)pow(2, 0)+ (int)pow(2,0+3-1)); // ù°��, ��°���� 1��
	cout << attendanceBook << endl; // 0101 = 5
	// ù���� �⼮�̾�� ���� ����� �� �� ����!
	attendanceBook = 1u; // ���� �ٽ� ����
	attendanceBook |= ((int)pow(2, 0) + (int)pow(2, 0 + 3 - 1)); // �¤����� 1�� �������.
	cout << attendanceBook << endl; // 0101 = 5

	// ������ �Ἦ�� ��� �ұ�?
	// 00000000000000000000000000000101
	
	// 00000000000000000000000000000001 �̰Ŷ�
	// 11111111111111111111111111111011 �̰Ÿ� &

	attendanceBook = 5u;
	attendanceBook &= ~(int)pow(2, 2); // 11111111111111111111111111111011
	cout << attendanceBook << endl;

	// (4) XOR ����: ^ , �ٸ��� 1, ������ 0
	// 1 ^ 1 == 0
	// 1 ^ 0 == 1
	// 0 ^ 1 == 1
	// 0 ^ 0 == 0
	int num_test5_0 = 5;
	int num_test5_1 = 10;
	// num_test5_0 = 00000101
	// num_test5_1 = 00001010
	cout << (num_test5_0 ^ num_test5_1) << endl; // 00001111 = 15

	attendanceBook = 0u;
	attendanceBook |= (int)pow(2, 0);
	cout << attendanceBook << endl;

	attendanceBook ^= (int)pow(2, 0);
	cout << attendanceBook << endl;

	attendanceBook ^= (int)pow(2, 0);
	cout << attendanceBook << endl;

	int a(1), b(3), c(2), d(1), e(2);
	cout << (a ^ b ^ c ^ d ^ e) << endl; // a^d -> 0, b^e -> 0, 3^0 -> 3

	// (5),(6) Shift ������
	// <<, >>
	cout << "\n Shift ������\n";
	cout << (1 << 3) << endl; // 00000001 ->00001000 , ���ڸ� �� �� �������� ����. 

	// ���� �ڸ��� ���� �����ؾ� ��.
	cout << (1 << 0) << endl;
	cout << (1 << 1) << endl;
	cout << (1 << 2) << endl;
	cout << (1 << 3) << endl;

	cout << (11 << 1) << endl;
	cout << (12 << 1) << endl; // 00001100 // 00011000 8 16
	// 10000001 ���� ��� 10000001 << 1 �ϸ� 00000010 ��,,
	attendanceBook = 0u;
	cout << (attendanceBook |=(1<< 2));

	cout << (16 >> 1) << endl; // 8
	cout << (8 >> 1) << endl; // 4
	cout << (4 >> 1) << endl; // 2
	cout << (2 >> 1) << endl; // 1
	cout << (1 >> 1) << endl; // 0

	cout << (14 >> 1) << endl; // 7
	cout << (15 >> 1) << endl; // 7

}