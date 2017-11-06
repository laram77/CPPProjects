#include <iostream>
#include <time.h>
using namespace std;

/*
template <typename T>
void changeNumber(T *a, int n) {
T *p;
for (p = a; p < a+n; p++)
if (*p < 0) *p == 0;
}

void function(double a, double b, double *res);
void functionThreeArray(double *a, double *b, double *c, int N);
*/

template<typename T>
T* funct(T *a, int na, T*b, int nb) {
	T *p;
	bool f = false;
	T *pb = b;
	for (p = a; p < a + na - nb; p++) {
		pb = b;
		double *c = p;
		if (*p == *pb) {
			for (; pb < b + nb; pb++, c++) {
				if (*pb != *c) break;
			}
			if (pb == b + nb) {
				f = true;
				return (c - nb);
			}
		}
	}
	return 0;
}
int main() {
	//srand(time(NULL));

	//11

	//int *a;
	//int N;
	//cin >> N;
	//a = new int[N];
	//int k2 = 0, k3 = 0, k4 = 0, k5 = 0;
	//int *p = a;
	//
	//for (; p < a + N; p++) {
	//	*p = rand() % 12 + 1;
	//	if(*p > 0 && *p <= 3) k2++;
	//	else if (*p > 4 && *p <= 6) k3++;
	//	else if (*p > 7 && *p <= 9) k4++;
	//	else k5++;
	//}
	//cout << "2 - " << double(k2) * 100 / N << "%" << endl;
	//cout << "3 - " << double(k3) * 100 / N << "%" << endl;
	//cout << "4 - " << double(k4) * 100 / N << "%" << endl;
	//cout << "5 - " << double(k5) * 100 / N << "%" << endl;
	//delete a;

	//1

	//int ar[7][8];
	//int *p;
	//int k = 0;
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 8; j++) {
	//		ar[i][j] = rand() % 101 - 20;
	//		cout << ar[i][j] << " ";
	//		if (ar[i][j] < 0) k++;
	//	}
	//	cout << endl;
	//}
	//cout << endl << endl;
	//p = new int[k];
	//int l = 0;
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 8; j++) {
	//		if (ar[i][j] < 0)
	//			p[l++] = ar[i][j];
	//	}
	//}
	//for (int i = 0; i < k; i++) {
	//	cout << p[i] << " ";
	//}

	//2
	/*
	int ar[9][7];
	int *p;
	int k = 0;
	for (int i = 0; i < 9; i++) {
	for (int j = 0; j < 7; j++) {
	ar[i][j] = rand() % 151 - 50;
	cout << ar[i][j] << " ";
	if (ar[i][j] % 3 == 0 || ar[i][j] % 5 == 0|| ar[i][j] % 7 == 0) k++;
	}
	cout << endl;
	}
	cout << endl << endl;
	p = new int[k];
	int l = 0;
	for (int i = 0; i < 9; i++) {
	for (int j = 0; j < 7; j++) {
	if (ar[i][j] % 3 == 0 || ar[i][j] % 5 == 0 || ar[i][j] % 7 == 0)
	p[l++] = ar[i][j];
	}
	}
	for (int i = 0; i < k; i++) {
	cout << p[i] << " ";
	}
	*/

	//3

	/*double *a, *p;
	int n;
	cin >> n;

	a = new double[n];
	for (p = a; p < a + n; p++) {
	*p = ((double)(rand() % 2) / (rand() % 100 + 1));
	cout << *p << " ";
	}
	cout << endl;
	*/

	//4 function
	/*
	double x, y, a[4];
	cin >> x >> y;
	function(x, y, a);
	for (int i = 0; i < 4; i++) {
	cout << a[i] << endl;
	}
	*/

	//5 function Three Array
	/*
	int n;
	cin >> n;
	double *p;
	double *a, *b, *c;
	a = new double[n];
	b = new double[n];
	c = new double[n];
	int k = 0;
	for (p = a; p < a + n; p++) {
	a[k] = rand() % 100;
	b[k] = rand() % 50;
	k++;
	}
	for (int i = 0; i < n; i++) {
	cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
	cout << b[i] << " ";
	}
	cout << endl;
	functionThreeArray(a, b, c, n);
	for (int i = 0; i < n; i++) {
	cout << c[i] << " ";
	}
	cout << endl;

	*/
	//6

	//double *a;
	//int n;
	//cin >> n;
	//a = new double[n];
	//for (int i = 0; i < n; i++) {
	//	a[i] = rand() % 81 - 40;
	//	cout << a[i] << " ";
	//}
	//cout << endl;
	//changeNumber(a, n);
	//
	//for (int i = 0; i < n; i++) {
	//	cout << a[i] << " ";
	//}

	//7
	double a[] = { 1,2,3,4,5,6,7 };
	double b[] = { 3,4,5 };
	double *p = funct(a, 7, b, 3);
	cout << p << endl;
	if (p != 0)
		cout << *p << endl;

	cout << endl;



	system("pause");
	return 0;
}


/*
void function(double a, double b, double *res) {
res[0] = a + b;
res[1] = a - b;
res[2] = a*b;
res[3] = a / b;
}
void functionThreeArray(double *a, double *b, double *c, int N) {
for (int i = 0; i < N; i++) {
c[i] = a[i] + b[i];
}
}
*/