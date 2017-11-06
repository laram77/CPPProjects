//#include<iostream>
//#include<ctime>
//using namespace std;
//int main() {
//	
//	int **a, **p;
//	a = new int *[4];
//	srand(time(NULL));
//	for (p = a; p < a + 4; p++)
//		*p = new int[6];
//
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 6; j++) 
//		{
//			a[i][j] = rand() % 10;
//			cout << a[i][j] << " ";
//		}
//
//		cout << endl;
//	}
//	
//	for (p = a; p < a + 4; p++)
//		delete[] * p;
//	delete[] a;
//
//	system("pause");
//	return 0;
//}