#include<iostream>

using namespace std;

/*
int main()
{
	int n; // ���� ����

	{
		int num; // ��� �ȿ� �ִ� ���� ������
	}

	// ��� �ۿ��� ��� ����
	// num

	for (int i = 0; i < 3; i++)
	{
		static int num=0; //static�� ���̸�, �޸� ������ ������ ������. 
		// ���α׷��� ���۵� �� �Ҵ�ǰ�, ����� �� �����ȴ�.
		// �׷��� num ������ �״�� �� ����.
		++num;
		cout << endl;
	}

	// new �̿��Ͽ�, ���� �޸��Ҵ�
	// Ư�� ������ �޸� �Ҵ��ϰ�, �� �޸��� �ּҸ� �����Ѵ�.
	// �׻� �����ͷ� �����ؾ� ��.
	int* pNum = new int;
	*pNum = 1;
	delete pNum; // �׻� ����ϰ� ������ ������ �ؾ���.
	// �׷��� ������ �޸𸮰� ��� �þ!
	// -> �޸� ����.
	int* pNum0 = new int(123);
	int* pNum1 = pNum0;

	cout << *pNum0 << endl; // 123
	delete pNum0;

	cout << *pNum0 << endl; // ?
	//  ����� �ȵ�. 
	cout << *pNum1 << endl; // �̰͵� �����Ⱚ�� ����.
	// pNum1�� �Ȱ��� �ּҸ� �����ϹǷ�,

	delete pNum0; // �� ���������. ��ȿ���� ���� �����͸� ����� ��, -> ������ �����ؾ� ��.!!




}
*/

/*
int main()
{
	int* pNum;
	{
		int n = 10;
		pNum = &n;
	}
	// n�� �̹� {} �ȿ��� ������ �Ǿ���.
	// ��� �ۿ��� �����͸� ����ϸ� ������ �� ����.
	cout << *pNum << endl;
}
*/
struct Person
{
	float weight;
	float height;
};


int main()
{
	// ���� �迭
	const int s = 10;
	int arr[s] = { 1,2,3 };

	// �̷� �� �ȵ���.
	/*
	int s;
	cin >> s;
	int arr[s] = { 1,2,3 }
	*/

	// �����Ҵ��� ����ϸ� ������!
	int num;
	cout << "���� �Է��Ͻÿ�" << endl;
	cin >> num;
	int* arr0 = new int[num];
	arr0[0] = 1;
	cout << arr0[0] << endl;

	delete[] arr0;

	// ����ü
	Person* person = new Person{ 74.1f, 180.2f };
	cout << person->weight << endl;
	cout << (*person).height << endl; // ǥ�� ��� �� ����.

	// person ������ ������� �̷��Ե� ������.
	Person* per = new Person[10];
	for (int i = 0; i < 10; i++)
	{
		per[i].height = i * 10;
		cout << per[i].height << endl;
		// cout << per[i]->weight << endl;
	}
	
	delete[] per;
	delete person;
	

}