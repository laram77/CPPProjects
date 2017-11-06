//#include<iostream>
//using namespace std;
//
//class Dog {
//public:
//	static Dog istance;
//	static int count;
//public:
//	Dog() { this->count++; }
//
//
//	/*Dog getInstance() {
//		if (!instance) { 
//		instance = new Dog();
//		return inctance;
//		}
//	}*/
//};
//
//int Dog::count = 0;
//
//int main() {	
//	
//	Dog * dog = new Dog();
//	cout << Dog :: count << endl;
//	
//	system("pause");
//	return 0;
//}


#include<iostream>
using namespace std;

class Point {
public:
	int x, y;

	Point(int x, int y) {
		this->x = x;
		this->y = y;}

	Point(const Point &obj) {
		x = obj.x;
		y = obj.y;}

	~Point() {};
};


class String {
public:
	string *str;
	String(string str) { this->str = new string(str);}
	String(const String&_str) { str = _str.str;}
	~String() {delete str;};
};

int main() {
	Point *p1 = new Point(1,2);
	Point *p2 = new Point(* p1);
	delete p1;
	p2->x = 3;		
	cout << p2->x << endl;
	//строки
	String *str1 = new String("qwerty");
	String *str2 = new String(*str1);
	delete str1;
	delete str2->str;
	str2->str = new string("queen");
	cout << str1->str << endl;

	system("pause");
	return 0;
}