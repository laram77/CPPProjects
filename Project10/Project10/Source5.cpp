#include <windows.h>
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
void main()
{
	srand(time(NULL));
	SetConsoleOutputCP(1251);
	const int size = 10;
	int ar[size];

	cout << "17.������� ������ �� 10 ����� ��������� �����. �������� ������� �������� �������� ������� (0-� ������� �������� � 1-�, 2-� ������� � 3-� � �.�.). " << endl;
	for (int i = 0; i < size; i++)
	{
		ar[i] = rand() % 21;
		cout << ar[i] << " ";
	}

	cout << endl << endl;

	for (int i = 0, i_end = size / 2; i<i_end; ++i)
	{
		int d = ar[i];
		ar[i] = ar[i+1];
		ar[i+2] = d; 
	}

	for (int i = 0; i < size; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl << endl;

	system("pause");
}

