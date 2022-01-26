#include<iostream>

void Call_by_Value(int n) {
	n++;
}
void Call_by_Ref(int& n) {
	n++;
}

int main()
{
	int n = 0; // integer�� �޸𸮴� 4byte

	// 1. reference Ÿ��
	// ���ο� �޸� �Ҵ��� ������ �ƴ�.
	// ���� n�� �޸𸮿� ���ο� �̸� r�� �ο� �Ѵ�.
	int& r = n; 

	r = 10;
	
	//2. r�� n�� �ᱹ ���� �޸��̹Ƿ� �ᱹ n = 0�� �ȴ�.
	std::cout << n << std::endl; 
	
	// 3. r�� n�� alias(��Ī)�� ����� �Ͱ� ���� �ǹ��̰�,
	// n�� r�� �ּҴ� ���� ������ Ȯ���� �����ϴ�.
	std::cout << &n << std::endl;
	std::cout << &r << std::endl;

	// 4. reference�� �ݵ�� �ʱⰪ�� �־�� �Ѵ�.
	// int& r2; // error!
	

	// 5. call by value.
	int n1 = 10;
	Call_by_Value(n);
	std::cout << n1 << std::endl;

	// 6. call by reference.
	// ����ü �� ���� Ÿ���� �޸𸮰� ū ��� call by reference�� ����ϸ�
	// �Լ� ���ο��� ���纻�� ������ �ʾƵ� �ǹǷ� �޸� ���鿡�� �����ϴ�!
	int n2 = 10;
	Call_by_Ref(n2);
	std::cout << n2 << std::endl;


}