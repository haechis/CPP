// 일반 변수 선언
int n1 = 0;
int n2(0);

// 배열과 구조체 초기화
int x[3] = { 1,2,3 };

struct Point { int x; int y; };
Point P = { 1,2 };

// C++11 부터, 중괄호{}를 사용한 일관된 초기화(Uniform Initialization) 사용 가능
// 1. 등호를 사용한 초기화 Copy initialization
int n1 = { 0 };
int x1[3] = { 1,2,3 };
Point p1 = { 1,2 };

// 2. 등호 없이 초기화 Direct initialization
int n2{ 0 };
int x2[3]{ 1,2,3 };
Point p2{ 1,2 };


// 일관된 초기화를 통한 데이터 손실 방지
int n1 = 3.14; // ok. 하지만 3으로 축소, 버그의 원인이 될 수 있음
int n2 = { 3.14 }; // error. 데이터 손실이 발생하는 초기화는 X

char c1 = 300; // ok. 하지만 overflow 발생
char c2 = { 300 }; // error. 300은 1바이트에 담을 수 없음