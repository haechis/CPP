// �ε� �Ҽ���.
// �ε� �Ҽ����� ��ǻ�� ���п��� ���Ǵ� ���� ǥ�� ��� �� �ϳ��Դϴ�. �ε� �Ҽ����� �Ǽ��� ǥ���ϴ� �������, �Ҽ����� ������ ��ġ�� �δ� ���� �ƴ϶� �Ҽ����� ��ġ�� ����(mantissa)�� ���� �����ϴ� ����Դϴ�. �� ����� ����ϸ� �ſ� ū ���� �ſ� ���� ���� ǥ���� �� �ֽ��ϴ�. 
// double , cloat���� �ַ� ���.
#include <iostream>

using namespace std;
int main() 
{
	// �ε��Ҽ����� �Ǽ��� ǥ��
	// float: 32 bit , ������: 8, ������:23
	// double: 64 bit, ������: 11, ������: 52
	// long double: 64~128 bit
	float num0 = 1;
	double num1 = 1;
	long double num2 = 1;
	cout << sizeof(num0) << endl;
	cout << sizeof(num1) << endl;
	cout << sizeof(num2) << endl;
	// c++���� �Ǽ��� double�� ����Ʈ��.
	// float�̳� long double �̿��ؼ� ����ȯ �ϴ²�.
	cout << sizeof(1.0f) << endl;
	cout << sizeof(1.0) << endl;
	cout << sizeof(1.0L) << endl; // Long double
	//������ Integer�� ���������� ����ȯ�濡 ���� �޶���.


	// �ε��Ҽ��� ����
	// 1. -118.625 �� ���
	//  -> ������, - (1110110.101)
	// -> -1.110110101 * 10e6(2)
	// ���⼭, 
	// ��ȣ | ������ | ������ �� ���� ��.
	// �������� ���, 0000 0000�� 127�� ��Ÿ��. 
	// (�����ΰ� 10�� ���� ������ ��츦 ����ؼ�)
	// �׷���, 10�� "6" ������ ���, 127 + 6 = 133 �̸�,
	// 133 to binary = 1000 0101��.
	// ��ȣ: 1 (����)
	// ������: 1000 0101 (127 + 6)
	// ������: 110110101

	unsigned int a;
	float b = -118.625;
	memcpy(&a, &b, sizeof(b)); // b�� ���� a�� ī�� �Ѵ�. �޸� ���� ���� ���� ����
	cout << a << endl; //a�� ���� binary �� ��ȯ�ϸ�, ������ ���� ���� �˴ϴ�. 
	cout << b << endl;

	// �����ؾ� �� ��!! (������ �����ؾ� ��.)
	float num_A = 0.1f;
	float num_B = 0.02f * 5.0f;

	cout << "\n����" << endl;
	cout << num_A << endl;
	cout << num_B << endl;

	if (num_A == num_B)
		cout << "Equal" << endl;
	else
		cout << "No Equal" << endl;

	cout.precision(64);
	cout << "\n���е� Ȯ��" << endl;
	cout << num_A << endl;
	cout << num_B << endl;

	if (num_A == num_B)
		cout << "Equal" << endl;
	else
		cout << "No Equal" << endl;

	// 10���� 0.1�̳� 0.02�� 2������ ǥ���� �� ����.
	// ���� ������ ���ڷ� ǥ����.

	if (num_A == 0.1)
		cout << "Equal, 0.1f == 0.1" << endl;
	if (num_A == 0.1L)
		cout << "euqal, 0.1f == o.1L (long double)" << endl;
	// �ε� �Ҽ����� ����� �����ϴ� ���� ����.
	// ���� epsilon ����ϴ� ��쵵 ����.
	// epsilon ����ϴ���, ������ �����Ǽ� ������ �ٻ��ϴ� ���
	float testA = 1.0f;
	float testB = 0.0f;
	for (int i = 0; i < 1000; i++) 
	{
		testB = testB + 0.001;
	}
	if (testA == testB) 
		cout << "equal, 1.0f = 0.001 * 1000" << endl;

	// �ε��Ҽ��� ��� ��, ���ϰ� �� �� ���� ���ϴ� ���
	// ����, 1.0�� �޸� ����: 0011 1111 1000 0000 0000 0000 0000 0000 = 1.0(2)
	// 1���� ���� �� �ִ� ���� ������: 0011 1111 1000 0000 0000 0000 0000 000"1"
	
	// ǥ�� ������ ���� ���� ��.
	// 127-23 (������ 23�ڸ��� ���ִ°�): 104�� binary -> 1101000
	// 00"11 0100 0"000 0000 0000 0000 0000 0000
	// = 1.0(2) * 10e(-24)(b)
	

	// �ִ밪�� ���غ���.
	unsigned int flt_max = 0b01111111111111111111111111111111;
	float flx_max_tmp;
	memcpy(&flx_max_tmp, &flt_max, sizeof(flt_max));
	cout << flx_max_tmp << endl; //���� �̻���. 
	// �����ΰ� �� 1�̸� Not A Number ��.
	// �����ο��� 1�� ������.
	unsigned int flt_max2 = 0b01111111011111111111111111111111;
	float flx_max_tmp2;
	memcpy(&flx_max_tmp2, &flt_max2, sizeof(flt_max2));
	cout << flx_max_tmp2 << endl; // �ִ밪

	// �����ΰ� �� 1�̰�, �����ΰ� �� 0�̸� ���Ѵ�
	unsigned int flt_max3 = 0b01111111100000000000000000000000;
	float flx_max_tmp3;
	memcpy(&flx_max_tmp3, &flt_max3, sizeof(flt_max3));
	cout << flx_max_tmp3 << endl; // �ִ밪

	// Minimum (Normalized �ּҰ�)
	// Float Min: 0000 0000 1000 0000 0000 0000 0000 0000 (�����ο� �ּҰ�)
	// 10e(-126)(2)

	// Float True min
	// Float Min: 0000 0000 0000 0000 0000 0000 0000 0001 (�����ο� �ּҰ�)
	// 10e(-126(2) * 10(-23)(2) = 10e(-149)(2)
}