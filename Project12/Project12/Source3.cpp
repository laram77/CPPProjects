#include<iostream>
using namespace std;
class User {
protected:
	int id;
	string username, password;
public:
	int getId() { return id; }
	void setId(int _id) { id = _id; }

	void setUsername(string _username) { username = _username; }
	void setPassword(string _password) { password = _password; }

};


class Burger {
protected:
	int a, b;
	int *x, *y;
public:	
	Burger()
	{ 
		
		x = new int;
		y = new int;
		cout << "Burger constructor." << endl;
	}

	~Burger() {	cout << "Destructor." << endl;
	delete x;
	delete y;
	}
	//модификатор
	void setBurger_a(int _a) { a = _a; }
	void setBurger_b(int _b) { b = _b; }
	//инспектор
	int getBurger_a() { return a; }
	int getBurger_b() { return b; }
};

class SuperBurger: Burger {
};

class Bread {
public:
};

class Tomato {
private:
public:
};

class Meal {
private:
public:
};

class Sous {
private:
public:
};

int main() {
	Burger * br = new Burger();
	Burger *b;
	Bread bre;
	Tomato tm;
	Meal ml;
	Sous sc;

	Burger b[100];
	b = new Burger[10];
	b[0] = * br;
	
	delete br;
	system("pause");
	return 0;
}