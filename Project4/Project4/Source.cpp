#include <iostream>
using namespace std;
void main()
	{
		setlocale(LC_ALL, "");
		int n; 
		
		cout << "������� ����������� ������� �� 10 �� 30 \n ";
		cin >> n;

		const int *p = &n;
		int m[*p];

		for (int i = 0; i < n; i++)
			m[i] = rand();
		int summ = 0;
		for (int *p = m + 1; p < m + n; p++)
			summ += *p;
		cout << summ;

		system("pause");
	
	}

	


