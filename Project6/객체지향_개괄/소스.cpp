#pragma warning(disable:4996)
#include<iostream>
#include<string>

using namespace std;

class Player_test
{
private:
	int power_public_test;

public:
	int health_public_test;
};

class Player
{
private:
	int _health;
	int _power;
	string _name;

public:
	Player(int health, int power, string name)
	{
		_health = health;
		_power = power;
		_name = name;
	}
	void attack(Player& target)
	{
		// 타겟 플레이어를 공격함.
		cout << "Attack" << _name << "->"<<target._name<< endl;
		damaged(target, _power);
		
	}
	void damaged(Player& target, int power)
	{
		target._health -= power;
		if (target._health <= 0)
			cout << "Died." << target._name << endl;
	}

};

int main()
{
	string s0 = "hello";
	string s1 = "world";
	// C++ 스타일.
	s0.append(s1); //s0에, s0 관련 특정 함수 이용하여 s1를 append함. s0가 주체적인 느낌이 강함.
	cout << s0 << endl;

	// C 스타일
	char s2[100] = "hello"; // 문자열이 문자 배열로 구성되어 있다는것이 드러남. C++ 의 string은 숨겨져 있음.
	char s3[] = "world";

	strcat(s2, s3);
	cout << s2 << endl;



	// - 클래스 - 
	Player_test player0;
	player0.health_public_test = 100; // 밖에서 접근 가능 (값 변경도 가능)
	// 클래스는 public이 아니면 외부에서 접근이 안됨.

	// player0.power = 200; // 이게 안되는 것. class 내 private에 접근이 안됨.



	// 게임으로 테스트
	Player player1{ 200,100 ,"David"};
	Player player2{ 200,100 ,"Clack"};

	player1.attack(player2);
	player1.attack(player2);

	player2.attack(player1);
	player2.attack(player1);

}