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
}