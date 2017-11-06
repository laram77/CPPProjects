//#include<iostream>
//#include<ctime>
//using namespace std;
//
//
//
//int main() {
//	int **a, **temp;
//	a = new int *[4];
//
//	srand(time(NULL));
//
//	for (int i = 0; i < 4; i++)                                            //9.—оздать функцию, позвол€ющую удал€ть строку (столбец) из матрицы.	
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
//	delete[] a[3];
//	cout << endl;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{			
//			cout << a[i][j] << " ";
//		}
//
//		cout << endl;
//	}
//
//
//	for (int i = 0; i < 3; i++)
//		delete[] a[i];
//	delete[] a;
//
//	system("pause");
//	return 0;
//}