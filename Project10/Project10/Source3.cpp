//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//	int unknown_number = rand() % 501; // загадываемое число
//	int enter_number; 
//	int k = 0;
//	while (enter_number != unknown_number)
//	{
//		cout << "Enter unknown number [1:500] : ";
//		cin >> enter_number; // отгадываем
//		k++;
//		if (enter_number > unknown_number) {
//			cout << "Your number is greater! Try again!"; continue;
//		}
//
//		if (enter_number < unknown_number) {
//			cout << "Your number is less! Try again!"; continue;
//		}
//
//		if (enter_number == 0) break;
//
//	} 
//	cout << "You win!!!\n";
//	cout << "count enter number " << k << endl;
//	system("pause");
//	return 0;
//}