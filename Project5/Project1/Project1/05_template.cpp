#include <iostream>

int square(int a) 
{
	return a*a;
}

double square(double a)
{
	return a*a;
}



int main(){
	// ����.
	square(3);
	square(3.5);
}


template<typename T>
T square(T a) {
	return a * a;
}

// ���ø� ����
// �ҽ� �ڵ带 ������ �� �� � Ÿ���� �Լ��� �ʿ����� �����Ͽ� ���� �Լ� ����
template<typename T>
T square(T a) {
	return a * a;
}

square(3); // 3�� int�̹Ƿ� square ���ø��� T�� int�� ��ȯ ����