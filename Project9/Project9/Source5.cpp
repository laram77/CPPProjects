//#include<iostream>
//#include <math.h>  
//#include <cmath>
//using namespace std;
//template<typename T>
//T root(T a) { return sqrt(a);}
//
//template<typename T>
//T kub(T a) { return a*a*a; } //pow(a,3)
//
//template<typename T>
//T sin1(T a) { return sin(a); }
//
//
//int main() {
//	setlocale(LC_ALL, "");
//	double(*f[3])(double) = { root, kub, sin1 }; 
//	int index = 1;
//
//	cout << " ��� ��������� ��������� ���������� ������ �����, ������ � ��� �����, ������ � ����� �����. " << endl << endl;
//	
//	while (true) {
//		cout << "������� 1 - ���������� ������ �����. 2 - ��� �����. 3 - ����� �����. " << endl;
//		cin >> index;
//
//		int number;
//		cout << "������� �����: ";
//		cin >> number;
//
//		if (index < 1 || index > 3) continue;
//		cout << f[index - 1](number) << endl;
//	}
//	system("pause");
//	return 0;
//}