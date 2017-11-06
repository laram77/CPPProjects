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
//	cout << " Ёта программа вычисл€ет квадратный корень числа, втора€ Ц куб числа, треть€ Ц синус числа. " << endl << endl;
//	
//	while (true) {
//		cout << "¬ведите 1 - квадратный корень числа. 2 - куб числа. 3 - синус числа. " << endl;
//		cin >> index;
//
//		int number;
//		cout << "¬ведите число: ";
//		cin >> number;
//
//		if (index < 1 || index > 3) continue;
//		cout << f[index - 1](number) << endl;
//	}
//	system("pause");
//	return 0;
//}