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
	// ���⿡ ����.
	swap_rf(x, y);

	Weapon weapon{ 20, 10 };
	
	upgrade(&weapon);
	upgrade_rf(weapon);

	int nums[] = { 1,2,3,4 };
	for (int& num : nums) //��ü�� �ٲٰڴٴ� �ǵ��� ���� ������, reference for�� ���� �� ����.
	{
		num = 0;
	}
	for (int num : nums)
		cout << num << endl;

	cout << square_ref(10) << endl; // �̰� ��. 
	// square_ref�� �Է°��� "int& ref"�� �ȵ�. "const int& ref"�� ��.
	cout << square_ref(10.1f) << endl; // �̰͵� ��.
}