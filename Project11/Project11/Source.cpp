#include<iostream>
using namespace std;
class Cars {
private:
	string number;
	string engine;
public:
	void set(string num) {
		if (num.length() < 4)
			cout << "error!";
		else		
			number = num;}

	void model(int s) {
		string d;		
	}
};

int main() 
{
	Cars car;
	car.set("1234as");

	system("pause");
	return 0;
}