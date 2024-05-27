#include<iostream>

using namespace std;

void swap(int px, int py)
{
	int temp = px;
	px = py;
	py = temp;
}

void swap_pt(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

struct Weapon
{
	int price;
	int power;
};

void upgrade(Weapon weapon)
{
	weapon.price += 10;
	weapon.power += 10;
}

void upgrade_pt(Weapon* weapon)
{
	weapon->power += 10; // �������� ����� ����ų ��!!!!!
	weapon->price += 10;
}


int main()
{
	// ������: �ּҰ��� ������ �ִ� ����.
	int x = 10;
	int* px = &x;
	cout << "value: " << x << " " << "pointer(px): " << px << endl;
	cout << "value: " << x << " " << "value(*px)-������: " << *px << endl;
	
	x = 20;
	cout << "value: " << x << " " << "pointer(px): " << px << endl;
	cout << "value: " << x << " " << "value(*px)-������: " << *px << endl;

	cout << "�׷���, �ּҴ� �״�ΰ� �������� �ٲ�� ��." << endl;

	*px = 30;
	cout << "value: " << x << " " << "pointer(px): " << px << endl;
	cout << "value: " << x << " " << "value(*px)-������: " << *px << endl;

	cout << "���������� �� ������ ��." << endl;

	x = 10;
	int y = 20;

	cout << "x: " << x << " " << "y: " << y << endl;
	swap(x, y);
	cout << "x: " << x << " " << "y: " << y << " �ȹٲ�"<<endl;

	cout << "pointer�� �Էº����� �ϴ� swap �Լ� ����" << endl;
	cout << "�ּҷ� ���� �����Ͽ� ���� ���� �����Ͽ���." << endl;
	cout << "x: " << x << " " << "y: " << y << endl;
	swap_pt(&x, &y);
	cout << "x: " << x << " " << "y: " << y << endl;

	// scanf ����
	// cout << "scanf ��� ��, �ּҷ� ���� �����Ͽ� ����Ͽ���." << endl;
	// int i;
	// scanf("%d\n", &i); // �̿Ͱ��� ����Ͽ���.

	cout << endl << "\n2��° ���� - Weapon (struct)" << endl;

	Weapon weapon{ 10, 20 };
	upgrade(weapon);
	cout << " Call by value" << endl;
	cout << weapon.price << " " << weapon.power << endl;
	
	upgrade_pt(&weapon);
	cout << " Call by address" << endl;
	cout << weapon.price << " " << weapon.power << endl;

	// Pointer�� ���� �Է��ϸ� ���� ���� �� ����.
	// ���� ������ �ʴ� ���� �����ϴ� ���
	cout << "Pointer�� �Ѱܵ� ���� ������ �ʴ´ٴ� ���� �����ϴ� ���" << endl;
}