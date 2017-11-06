#include<iostream>
#include<ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	double *a, *p;
	int n;
	cout << "¬ведите число от 1 до 10: ";
	cin >> n;

	a = new double[n];
	for (p = a; p < a + n; p++) {
		*p = ((double)(rand() % 2) / (rand() % 100 + 1));
		cout << *p << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}