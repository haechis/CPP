#include<iostream>

using namespace std;

union Union
{
	// Union �� i,f,d �� ���� �ּҸ� �����ϹǷ�,
	// i,f,d�� �޸� �ּҴ� ����.
	int i;
	float f;
	double d;
};

int main() {
	// ������(Pointer): �޸� �ּҸ� ����Ű�� ����
	 
	int num = 147;
	
	int* pointer = &num; // &num: num�� �ּҸ� ����Ŵ. (&: ���׿����� ��� �� �ּҸ� ����Ŵ)

	cout << num << endl;
	cout << "num�� �ּ�: "<< pointer << endl;

	// �ּҰ��� �̿��Ͽ� �ּҿ� �ִ� ���� �����ͺ���.

	//
	cout << "�����ͷ� ������ ���� (������) : " << *pointer << endl;

	// ������ �̿��ؼ�, �ּҿ� �ִ� ���� �ٲ� ���� ����.
	*pointer = 100;
	cout << num << endl;
	cout << "�ּҴ� �״����"<< pointer << endl; //�ּҴ� �״����

	int* pNum0 = &num;
	int* pNum1 = &num;
	int* pNum2 = pNum0;

	cout << num << endl; // ����: 100
	cout << pNum0 << endl; // ����: num�� �ּ� 
	cout << pNum1 << endl; // ����: num�� �ּ�
	cout << pNum2 << endl; // ����: num�� �ּ�

	cout << num << endl; // ����: 100
	cout << *pNum0 << endl; // ����: 100
	cout << *pNum1 << endl; // ����: 100
	cout << *pNum2 << endl << endl; // ����: 100

	int* pNum3 = 0;
	cout << pNum3 << endl;
	// cout << *pNum3 << endl; // �߸��� ������ ���� ���� �߻� ����, �쿬�� 16���� ��ȿ�� �ּҸ� ����� �� ����, �����ؾ� ��.

	// int �� �����ϴ� ������, ����Ű�� �ּҿ� ����� ���� ��� ����� ������ �����ϱ� ����!
	// ��) -> Union 
	Union u;
	// int* ip = &u; // �ȵ�.
	int* ip = (int*)&u.i;
	float* fp = (float*)&u;
	double* dp = (double*)&u;

	u.i = 1;
	u.f = 1.f;
	u.d = 1.;

	cout << *ip << endl;
	cout << *fp << endl;
	cout << *dp << endl;

	cout << &u.i << endl;
	cout << &u.f << endl;
	cout << &u.d << endl;


	// �����Ϳ� ��� �ֱ�
	const int numC = 10;
	// numC = 1 // ���� ����.
	int numC_test = 10;
	const int* pNumC = &numC_test;

	// *pNumC = 1; ������ �������� �̿��ؼ�, const int ���������� ���� ����!

	int* const pN = &num; // pN ���ٲ�.


}