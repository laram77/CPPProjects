//#include <iostream>
//#include <math.h>
//using namespace std;
///*�������� ������������� ������� ������� ��� ���������� ������ ��������� (a*x + b = 0) �
//����������� (a*x2+b*x + c = 0) ���������. ���������: � ������� ���������� ������������ ���������. */
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
//	else throw "������� ���!";
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
//	cout << " 1. �������� ������������� ������� ������� ��� ���������� ������ ���������\n ";
//	cout << "(a*x + b = 0) � ����������� (a*x^2+b*x + c = 0) ���������. ���������:\n ";
//	cout << "� ������� ���������� ������������ ���������. " << endl << endl;
//	cout << " 2. �����." << endl << endl;
//
//	cout << " ������� ����� ������� : ";
//	cin >> key;
//	cout << endl;
//
//	switch (key)
//	{
//
//	case 1:
//		cout << " ���� ��������� �������� �� ������� 1, ���� ���������� �� ������� 2: ";
//		cin >> v;
//		if (v == 1)
//		{
//			cout << " ������� ������ ����������� :";
//			cin >> a;
//			cout << " ������� ������ ����������� :";
//			cin >> b;
//			cout << endl;
//			cout << " ������ ��������� ��������� ����� ����� :" << linur(a, b);
//			cout << endl;
//		}
//		else
//		{
//			cout << " ������� ������ ����������� :";
//			cin >> a;
//			cout << endl;
//			cout << "������� ������ ����������� :";
//			cin >> b;
//			cout << endl;
//			cout << " ������� ������ ����������� :";
//			cin >> c;
//			cout << endl;
//			double x1 = X< 1 >(a, b, c);
//			double x2 = X< 2 >(a, b, c);
//			cout << " ������ ������ ��������� ��������� ����� ����� :" << x1 << endl;
//			cout << " ������ ������ ��������� ��������� ����� ����� :" << x2 << endl;
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

