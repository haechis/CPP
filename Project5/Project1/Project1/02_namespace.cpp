// std namespace ��� ��� 3����


// 1. ������ �̸��� ���
#include <iostream>

int main() {
	std::cout << 3 << std::endl;
}

// 2. using ����

#include <iostream>
using std::cout;
using std::endl;

int main(){
std<<endl;


// 3. using directive
#include <iostream>
using namespace std;
int main()
{
	cout << 1 << endl;
}