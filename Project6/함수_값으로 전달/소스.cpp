#include <iostream>

using namespace std;

void swap(int px, int py)
{
	cout << "\n�Լ� ����" << endl;
	cout << "px addr : " << &px << endl;
	cout << "py addr : " << &py << endl;
	int temp = px;
	px = py;
	py = temp;
}

struct Weapon
{
	int price;
	int power;
};

void upgrade(Weapon weapon)
{
	weapon.power += 10;
	weapon.price += 10;
}

Weapon Upgrade(Weapon weapon)
{
	weapon.power += 10;
	weapon.price += 10;
	return weapon;
}

int main()
{
	int x = 10,  y = 20;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	cout << "x addr : " << &x << endl;
	cout << "y addr : " << &y << endl;
	
	
	swap(x, y);
	cout << endl;
	cout << "���� ��" << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	cout << "x addr : " << &x << endl;
	cout << "y addr : " << &y << endl;

	cout << "\n\n�ι�° ����, Weapon�̶�� Struct�� ���� Call by value Ȯ��!" << endl;
	Weapon weapon{ 10,20 };
	cout << "Upgrade ��" << endl;
	cout << "price: " << weapon.price << endl;
	cout << "power: " << weapon.power << endl<<endl;
	upgrade(weapon);
	cout << "Upgrade �� - void �Լ� Ȱ��" << endl;
	cout << "price: " << weapon.price << endl;
	cout << "power: " << weapon.power << endl;

	cout << "�ݿ��Ϸ��� return���� ������ ��. (Call by value����)" << endl;
	weapon = Upgrade(weapon);
	cout << "Upgrade �� - return Ȱ��" << endl;
	cout << "(����: ū �Ķ���ʹ� ������� �߻� ����)" << endl;
	cout << "(����: ���� ���� �Լ��� �� ��, ���� �ٲ��� �ʴ� ���� �� �� ����! => ���� �� ū ������ ��.)" << endl;
	cout << "price: " << weapon.price << endl;
	cout << "power: " << weapon.power << endl;
}