#include <iostream>

using namespace std;

void swap(int px, int py)
{
	cout << "\n함수 내부" << endl;
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
	cout << "스왑 후" << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	cout << "x addr : " << &x << endl;
	cout << "y addr : " << &y << endl;

	cout << "\n\n두번째 예제, Weapon이라는 Struct를 만들어서 Call by value 확인!" << endl;
	Weapon weapon{ 10,20 };
	cout << "Upgrade 전" << endl;
	cout << "price: " << weapon.price << endl;
	cout << "power: " << weapon.power << endl<<endl;
	upgrade(weapon);
	cout << "Upgrade 후 - void 함수 활용" << endl;
	cout << "price: " << weapon.price << endl;
	cout << "power: " << weapon.power << endl;

	cout << "반영하려면 return값을 받으면 됨. (Call by value에서)" << endl;
	weapon = Upgrade(weapon);
	cout << "Upgrade 후 - return 활용" << endl;
	cout << "(단점: 큰 파라미터는 오버헤드 발생 가능)" << endl;
	cout << "(장점: 리턴 없는 함수를 볼 때, 값이 바뀌지 않는 것을 알 수 있음! => 협업 시 큰 도움이 됨.)" << endl;
	cout << "price: " << weapon.price << endl;
	cout << "power: " << weapon.power << endl;
}