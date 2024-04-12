#include<iostream>

using namespace std;
int main()
{
	int num0 = 11;   // 10����
	int num1 = 011;  // 8����
	int num2 = 0b11; // 2���� (binary)
	int num3 = 0x11; // 16���� (Hex)

	cout << num0 << endl;
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	// int: �Ϲ������� 32bit
	// 16bit �𵨵� ������
	// signed integer�� minus ǥ�� ���� , unsigned�� 0���� ��, minus ǥ�� ����.
	// short int�� 16bit (2byte)
	// long long�� 64bit ����
	

	int intNum = 0;
	long longNum = 0;
	int* intPointer = &intNum;

	cout << sizeof(intNum) << endl;      // 4byte
	cout << sizeof(longNum) << endl;     // 4byte
	cout << sizeof(intPointer) << endl;  // 4byte

	// �߿��Ѱ� ����ȯ�濡 ���� ������ size�� �޶��� �� ����!
	// �̷��� ���� ���̰� �߿��� ���� �Ʒ��� ���� ���� ũ�⸦ �����ؾ� ��.(fixed width integer)
	int8_t int_size_check0 = 0;
	int16_t int_size_check1 = 0;
	int32_t int_size_check2 = 0;

	cout << sizeof(int_size_check0) << endl;  // 1byte
	cout << sizeof(int_size_check1) << endl;  // 2byte
	cout << sizeof(int_size_check2) << endl;  // 4byte

	// Type ��ȯ���� ��ٷ� �����ϴ� ���
	unsigned int a = 11u; // 11�ڿ� u(unsigned)�� ������ ��ٷ� unsigned integer�� ������.
	long int long b = 0L; // u / L�� ������ 11, 0�� ������ �ǰ� unsigned Ȥ�� long���� ��ȯ�̵�����, ���ڸ� ���� ��ٷ� ������.
	long long c = 0LL;
	unsigned long long d = 0LLu; //Ȥ�� 0uLL
	
	
	cout << "�ڷ��� ũ��" << endl;
		
	// 8bit maximum = 255 = 2^(8) - 1 (b) 1111 1111
	// 16bit maximum = 65535 = 2^(16) - 1, (b) 1111 1111 1111 1111
	cout << (int)numeric_limits<uint8_t>::max() << endl;
	cout << numeric_limits<uint16_t>::max() << endl;


	// < Singed > 
	// ������ ��� => 2�� ������ Ȱ�� tows complement
	// ������� 2�� ������ ���� ���� ������ ��.

	cout << "�ڷ��� ũ��: Signed" << endl;
	// 8 bit maximum = 127 = 2^(7) - 1 , (b) 0111 1111
	// 16bit maximum = 32767 = 2^(15) - 1, (b) 0111 1111 1111 1111
	cout << (int)numeric_limits<int8_t>::max() << endl;
	cout << numeric_limits<int16_t>::max() << endl;

	// �ּҰ�!
	// 8 bit minimum = -128 , (b) 1000 0000 => 2�� ���� => (0111 1111) + 1 => 1000 0000 ==> -128
	// 16 bit minimum = -32768
	cout << "�ڷ��� ũ��: Signed minimum" << endl;

	cout << (int)numeric_limits<int8_t>::min() << endl;
	cout << numeric_limits<int16_t>::min() << endl;


	// Overflow
	uint32_t num32 = numeric_limits<uint32_t>::max();
	uint32_t num32_1= num32 + 1;
	cout << "Overflow test" << endl;
	cout << num32 << endl;
	cout << num32_1 << endl;

	// Underflow
	uint32_t num32_min = numeric_limits<uint32_t>::min();
	uint32_t num32_min_1 = num32_min - 1;
	cout << "Underflow test" << endl;
	cout << num32_min << endl;
	cout << num32_min_1 << endl;


	return 0;
}