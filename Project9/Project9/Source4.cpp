//#include<iostream>
//#include<ctime>                          
//using namespace std;
//template<typename T>
//T plus1(T a, T b) {return a + b;}
//
//template<typename T>
//T minus1(T a, T b) {return a - b;}
//
//template<typename T>
//T div(T a, T b) { return a / b; }
//
//template<typename T>
//T mult(T a, T b) { return a * b; }
//
//int main() {
//	double(*f[4])(double, double) = { plus1, minus1, div, mult };  //int(*f[4])(int, int) = { plus1, minus1, div, mult };
//	int index = 1;
//
//	while (true) {
//		cout << "text " << endl;
//		cin >> index;
//		if (index < 1 || index > 4) continue;
//		cout << f[index - 1](4, 5) << endl;
//	}
//	system("pause");
//	return 0;
//}