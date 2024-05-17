#include <iostream>

using namespace std;

int sum(int x, int y);
int abs(int x);
void print(int x, int y);
void print();
int abssum(int x, int y);



int sum(int x, int y)
{
	int z = x + y;
	return z;
}

int abs(int x)
{// 절대값.
	// 삼항 연산자. 앞에 조건이 true면 앞에를 실행, 앞에 조건이 false이면 뒤를 실행함.
	int y = x >= 0 ? x : -x;
	return y;
}

void print(int x, int y)
{
	int z = x + y;
	cout << x << endl;
	if (y < 0)
		return;
	cout << y << endl;
	return;
	// return 여러개 쓰는것은 지양
	
}

void print()
{
	cout << "Hello World" << endl;
}

int abssum(int x, int y)
{
	int z = abs(x) + abs(y);
	return z;
}

int main()
{
	cout << sum(5, 1) << endl;
	cout << abs(-10) << endl;
	print(10, 20);
	print(10, -20);
	print();
	cout << abssum(-5, -10) << endl;
}