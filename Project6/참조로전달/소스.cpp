#include<iostream>
using namespace std;

void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void swap_rf(int& px, int& py)
{
	int temp = px;
	px = py;
	py = temp;
}

struct Weapon
{
	int price;
	int power;
};

void upgrade(Weapon* pWeapon)
{
	pWeapon->power += 10;
	pWeapon->price += 10;
}
void upgrade_rf(Weapon& pWeapon)
{
	pWeapon.power += 10;
	pWeapon.price += 10;
}

void print(const Weapon& pWeapon)
{
	cout << pWeapon.power << endl;
	cout << pWeapon.price << endl;
}

int square_ref(const int& ref)
{
	return ref * ref; 
}

int main()
{
	int x(10);
	int y(20);

	swap(&x, &y);

	x = 10, y = 20;
	// 보기에 편함.
	swap_rf(x, y);

	Weapon weapon{ 20, 10 };
	
	upgrade(&weapon);
	upgrade_rf(weapon);

	int nums[] = { 1,2,3,4 };
	for (int& num : nums) //객체를 바꾸겠다는 의도가 있을 떄에는, reference for가 좋을 수 있음.
	{
		num = 0;
	}
	for (int num : nums)
		cout << num << endl;

	cout << square_ref(10) << endl; // 이게 됨. 
	// square_ref의 입력값이 "int& ref"면 안됨. "const int& ref"면 됨.
	cout << square_ref(10.1f) << endl; // 이것도 됨.
}