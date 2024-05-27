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
	weapon->power += 10; // 포인터의 멤버를 가리킬 때!!!!!
	weapon->price += 10;
}


int main()
{
	// 포인터: 주소값을 가지고 있는 변수.
	int x = 10;
	int* px = &x;
	cout << "value: " << x << " " << "pointer(px): " << px << endl;
	cout << "value: " << x << " " << "value(*px)-역참조: " << *px << endl;
	
	x = 20;
	cout << "value: " << x << " " << "pointer(px): " << px << endl;
	cout << "value: " << x << " " << "value(*px)-역참조: " << *px << endl;

	cout << "그러면, 주소는 그대로고 변수값은 바뀌게 됨." << endl;

	*px = 30;
	cout << "value: " << x << " " << "pointer(px): " << px << endl;
	cout << "value: " << x << " " << "value(*px)-역참조: " << *px << endl;

	cout << "마찬가지로 잘 적용이 됨." << endl;

	x = 10;
	int y = 20;

	cout << "x: " << x << " " << "y: " << y << endl;
	swap(x, y);
	cout << "x: " << x << " " << "y: " << y << " 안바뀜"<<endl;

	cout << "pointer를 입력변수로 하는 swap 함수 실행" << endl;
	cout << "주소로 값에 접근하여 변수 값을 변경하였음." << endl;
	cout << "x: " << x << " " << "y: " << y << endl;
	swap_pt(&x, &y);
	cout << "x: " << x << " " << "y: " << y << endl;

	// scanf 사용시
	// cout << "scanf 사용 시, 주소로 값에 접근하여 출력하였음." << endl;
	// int i;
	// scanf("%d\n", &i); // 이와같이 사용하였음.

	cout << endl << "\n2번째 예제 - Weapon (struct)" << endl;

	Weapon weapon{ 10, 20 };
	upgrade(weapon);
	cout << " Call by value" << endl;
	cout << weapon.price << " " << weapon.power << endl;
	
	upgrade_pt(&weapon);
	cout << " Call by address" << endl;
	cout << weapon.price << " " << weapon.power << endl;

	// Pointer로 값을 입력하면 값이 변할 수 있음.
	// 값이 변하지 않는 것을 보장하는 방법
	cout << "Pointer로 넘겨도 값이 변하지 않는다는 것을 보장하는 방법" << endl;
}