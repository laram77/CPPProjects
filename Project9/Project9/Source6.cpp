#include<iostream>
#include<ctime>
using namespace std;
int main() {
	srand(time(NULL));
	const int N = 20;
	int a[N];
	int *p;

	/*for (p = a; p < a + N; p++)
	{
		*p = rand() % 40 - 21;
		cout << *p << " ";		
	}
	cout << endl;*/

	int i, i_min, j, t;
	for (i = 1; i<N; i += 2)
		if (a[i]>0)
		{
			i_min = i;
			for (j = i + 2; j<N; j += 2)
				if (a[j]>0 && a[j]<a[i_min])
					i_min = j;
			t = a[i]; a[i] = a[i_min]; a[i_min] = t;
		}
	cout << a[i_min] << " ";

	system("pause");
	return 0;
}
