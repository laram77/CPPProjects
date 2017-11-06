//#include<iostream>
//#include<ctime>
//using namespace std;
//int main() {
//	
//	int *a;
//	int N;
//	cin >> N;
//	a = new int[N];
//	int k2 = 0, k3 = 0, k4 = 0, k5 = 0;
//	
//	int *p = a;
//
//	srand(time(NULL));
//	
//	for (; p < a+N; p++)
//	{
//		*p = rand() % 12 + 1;
//
//		if (*p > 0 && *p <= 3)
//			k2++;
//		else if (*p >= 4 && *p <= 6)
//			k3++;
//		else if (*p >= 7 && *p <= 9)
//			k4++;
//		else
//			k5++;
//	}
//
//
//	cout << "2: " << double(k2) * 100 / N << " %" <<  endl;
//	cout << "3: " << double(k3) * 100 / N << " %" << endl;
//	cout << "4: " << double(k4) * 100 / N << " %" << endl;
//	cout << "5: " << double(k5) * 100 / N << " %" << endl;
//
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<ctime>
//using namespace std;
//int main() {
//
//	int a[7][8];
//	int *p;
//	int k;
//	a = new int[N];
//	
//	int *p = a;
//
//	srand(time(NULL));
//
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			*p = rand() % 101 - 20;
//			cout << a[i][j] << " ";
//			if (a[i][j] < 0)
//				k++;
//		}
//	
//		cout << endl;
//	}
//
//	cout << endl << endl;
//
//	p = new int[k];
//	int l = 0;
//
//	for (int i = 0; i < 7; i++)
//	
//		for (int j = 0; j < 8; j++)
//		
//			if (a[i][j] < 0)
//				p[l++] = a[i][j];
//		
//
//	for (int i = 0; i < k; i++)
//		cout << p[i] << " ";
//	
//
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<ctime>
//using namespace std;
//int main() {
//
//	double *a, *p;
//	int N;
//	cin >> N;
//
//
//	srand(time(NULL));
//
//	a = new double[N];
//
//	for (p = a; p < a + N; p++)
//	{
//		*p = ((double)(rand() % 2) / (rand() % 100 + 1));
//		cout << *p << " ";
//	}
//
//	cout << endl << endl;
//
//	
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<ctime>
//using namespace std;
//void func(double *a, double *b, double *c, int N)
//{
//	for (int i = 0; i < N; i++)
//		c[i] = a[i] + b[i];
//}
//
//int main() {
//	int N;
//	cin >> N;
//	double *a, *b, *c;
//	
//	srand(time(NULL));
//
//	a = new double[N];
//	b = new double[N];
//	c = new double[N];
//
//	for (int i = 0; i < N; i++)
//	{
//		a[i] = double(rand() % 12) / (rand() % 20+1);
//		b[i] = double(rand() % 12) / (rand() % 20 + 1);
//				
//	}
//
//	func(a, b, c, N);
//	for (int i = 0; i < N; i++)
//		cout << c[i] << " ";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<ctime>
//using namespace std;
//template<typename T>
//void func(T *a, int N)
//{
//	T *p;
//	for (p = a; p < a + N; p++)
//	if (*p < 0)
//		*p = 0;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	double *a;	
//	srand(time(NULL));
//	a = new double[N];
//
//	for (int i = 0; i < N; i++)
//	{
//		a[i] = double(rand() % 12) / (rand() % 20 + 1);
//	}
//
//	func(a, N);
//
//	for (int i = 0; i < N; i++)
//		cout << a[i] << " ";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<ctime>
using namespace std;
template<typename T>
T* func(T *a, int NA, T*b, int NB)
{
	T *p;
	bool f = false;
	T *pb = b;

	for (p = a; p < a + NA - NB; p++) 
	{
		pb = b;
		double *c = p;
		if (*p == *pb) 
		{
			for (; p < b + NB; pb++, c++) 
			{
				if (*pb != *c)
					break;
			}
			if (pb == b + NB) 
			{
				f = true;
				return (c - NB);
			}
		}
	}

	return 0;
}
		

int main() {
	
	double a[] = {1,2,1,8,4,5,10};
	double b[] = {2,1,8};
	double *p = func(a, 7, b, 3);

	cout << a << endl;
	cout << p << endl;
	cout << p - a << endl;
	if (p != 0)
	cout << *p << endl;	
	

	system("pause");
	return 0;
}