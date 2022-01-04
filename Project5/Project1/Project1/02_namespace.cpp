// std namespace 사용 방법 3가지


// 1. 완전한 이름의 사용
#include <iostream>

int main() {
	std::cout << 3 << std::endl;
}

// 2. using 선언

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