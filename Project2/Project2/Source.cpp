//#include <iostream>
//#include <math.h>
//using namespace std;
///*Написать перегруженные шаблоны функций для нахождения корней линейного (a*x + b = 0) и
//квадратного (a*x2+b*x + c = 0) уравнений. Замечание: в функции передаются коэффициенты уравнений. */
//
//double linur(double a, double b)
//{
//	return -b / a;
//}
//
//template < int I > double X(double a, double b, double c)
//{
//	if (I == 1) return (-b + sqrt(b*b - 4 * a*c)) / 2 / a;
//	else if (I == 2) return (-b - sqrt(b*b - 4 * a*c)) / 2 / a;
//	else throw "РЕШЕНИЯ НЕТ!";
//}
//
//void main()
//
//{
//	system("color 0a");
//	setlocale(LC_CTYPE, "rus");
//	int key, v;
//	double a, b, c;
//
//	cout << " 1. Написать перегруженные шаблоны функций для нахождения корней линейного\n ";
//	cout << "(a*x + b = 0) и квадратного (a*x^2+b*x + c = 0) уравнений. Замечание:\n ";
//	cout << "в функции передаются коэффициенты уравнений. " << endl << endl;
//	cout << " 2. ВЫХОД." << endl << endl;
//
//	cout << " Введите номер задания : ";
//	cin >> key;
//	cout << endl;
//
//	switch (key)
//	{
//
//	case 1:
//		cout << " Если уравнение линейное то введите 1, если квадратное то введите 2: ";
//		cin >> v;
//		if (v == 1)
//		{
//			cout << " Введите первый коэффициент :";
//			cin >> a;
//			cout << " Введите второй коэффициент :";
//			cin >> b;
//			cout << endl;
//			cout << " Корень линейного уравнения будет равен :" << linur(a, b);
//			cout << endl;
//		}
//		else
//		{
//			cout << " Введите первый коэффициент :";
//			cin >> a;
//			cout << endl;
//			cout << "Введите второй коэффициент :";
//			cin >> b;
//			cout << endl;
//			cout << " Введите третий коэффициент :";
//			cin >> c;
//			cout << endl;
//			double x1 = X< 1 >(a, b, c);
//			double x2 = X< 2 >(a, b, c);
//			cout << " Первый корень линейного уравнения будет равен :" << x1 << endl;
//			cout << " Второй корень линейного уравнения будет равен :" << x2 << endl;
//			cout << endl;
//		}
//
//		break;
//	case 2:
//		break;
//	}
//
//}

#include <iostream>
using namespace std;
void sum(int a, int b)
{
	return (a + b);
}
void main()
{
	cout << sum(10, 12);


	system("pause");
}

