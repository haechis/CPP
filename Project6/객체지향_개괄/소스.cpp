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
		// Ÿ�� �÷��̾ ������.
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
	// C++ ��Ÿ��.
	s0.append(s1); //s0��, s0 ���� Ư�� �Լ� �̿��Ͽ� s1�� append��. s0�� ��ü���� ������ ����.
	cout << s0 << endl;

	// C ��Ÿ��
	char s2[100] = "hello"; // ���ڿ��� ���� �迭�� �����Ǿ� �ִٴ°��� �巯��. C++ �� string�� ������ ����.
	char s3[] = "world";

	strcat(s2, s3);
	cout << s2 << endl;



	// - Ŭ���� - 
	Player_test player0;
	player0.health_public_test = 100; // �ۿ��� ���� ���� (�� ���浵 ����)
	// Ŭ������ public�� �ƴϸ� �ܺο��� ������ �ȵ�.

	// player0.power = 200; // �̰� �ȵǴ� ��. class �� private�� ������ �ȵ�.



	// �������� �׽�Ʈ
	Player player1{ 200,100 ,"David"};
	Player player2{ 200,100 ,"Clack"};

	player1.attack(player2);
	player1.attack(player2);

	player2.attack(player1);
	player2.attack(player1);

}