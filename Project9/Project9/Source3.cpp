//#include<iostream>
//#include<ctime>                          
//using namespace std;
//
//void exend(int **&a) {
//	int **temp;
//	temp = new int *[5];
//
//	for (int i = 0; i < 4; i++)
//		temp[i] = a[i];
//	delete[] a;
//
//	a = temp;
//	a[4] = new int[6];
//
//	for (int i = 0; i < 6; i++)
//		a[4][i] = rand() % 10;
//
//}
//
//
//int main() {
//	int **a, **temp;
//	a = new int *[4];
//
//	srand(time(NULL));
//
//	for (int i = 0; i < 4; i++)
//		a[i] = new int[6];
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
//	
//	exend(a);
//	
//	cout << endl;
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{			
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < 5; i++)
//		delete[] a[i];
//	delete[] a;
//
//	system("pause");
//	return 0;
//}