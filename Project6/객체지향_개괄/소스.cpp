#include<iostream>

#include<string>

using namespace std;

class Parent {
protected:
	string name;
	int age;

public:
	Parent() {} // �⺻ ������
	Parent(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setAge(int age)
	{
		this->age = age;
	}
	string getName()
	{
		return name;
	}
	int setAge()
	{
		return age;
	}
};

class Child :public Parent 
{
public:
	Child() {} // �⺻ ������

	Child(string name, int age) :Parent(name, age)
	{
	}

	void printName()
	{
		cout << "Child name: " << this->name << endl;
	}
	void printAge()
	{
		cout << "Child age: " << this->age << endl;
	}
};

int main()
{
	Child child_1;

	child_1.setName("ha");
	child_1.setAge(30);

	child_1.printName();
	child_1.printAge();

	Child child_2;

	child_2.setName("haha");
	child_2.setAge(20);
	child_2.printName();
	child_2.printAge();




	return 0;
}

/*
#include<iostream>

class Class_Test
{
	// Ŭ����
	// ������, �Ҹ���
	// ��ü ����, �Ҹ� �� �ڵ� ȣ��
	// ���� ������ ������ �⺻ �Ҹ���/������ ����.

	// ����Լ�.: �ش� Ŭ������ ����ϴ� ���� �Լ�



private:
	int m_i;
	float m_f;

public:
	

	Class_Test()  // ������
		: m_i(100) //�̴ϼȶ�����
		, m_f(0.f) // �̴ϼȶ�����
	{	
	}
	
	void SetInt(int i)
	{
		m_i = i;
	}

	// �Ҹ���
	// �����Լ� return �� �� , �Ҹ��� ���� ��.
	~Class_Test()
	{

	}

};

int main()
{
	Class_Test c; // Ŭ���� �� public ��� ������ ���� ����.
	// �����ڰ� �ٷ� ���� ��.
	
	c.SetInt(10);

	char a = 98;
	std::cout << a << std::endl;

	return 0;
}
*/

/*
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
*/