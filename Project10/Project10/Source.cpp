//#include<iostream>
//#include<fstream>
//#include<string>
//#include<windows.h>
//using namespace std;
//
//ifstream inf("Mans.txt");
//ofstream ouf;
//struct Date { int day, month, year; };
//struct Man { string Sname, name; Date b_date;
//
//void enter() {
//	char c;
//	inf >> Sname >> name >> b_date.day >> c >> b_date.month >> c >> b_date.year;
//}
//
//void print() {
//	cout << Sname << " " << name << " " << b_date.day << "." << b_date.month << "." << b_date.year << endl;
//}
//};
//
//bool byName(Man m1, Man m2) {
//	return (m1.name > m2.name);
//}
//
//bool bySurname(Man m1, Man m2) {
//	return (m1.Sname > m2.Sname);
//}
//
//void sorting(Man*ms, int N, bool(*f)(Man, Man)) {
//	for (int i = 0; i < N - 1; i++)
//		for (int j = 0; j < N - 1; j++)
//			if (f(ms[j], ms[j + 1]) == true)
//				swap(ms[j], ms[j + 1]);
//
//}
//
//void searchBymonth(Man*ms, int N) {
//	int month;
//	cin >> month;
//	for (int i = 0; i < N; i++)
//		if (ms[i].b_date.month == month)
//			ms[i].print();
//}
//
//bool searchByName(Man m, char *c) {
//	if (strstr(m.name.c_str(), c))
//		return true;
//	else return false;
//}
//
//bool searchBySurName(Man m, char *c) {
//	if (strstr(m.Sname.c_str(), c))
//		return true;
//	else return false;
//}
//
//void Searching(Man *ms, int N, bool(*f)(Man, char*)) {
//	char text[20];
//	cin >> text;
//	for (int i = 0; i < N; i++)
//		if (f(ms[i], text) == true)
//			ms[i].print();
//}
//
//
//void add(Man *&ms, int &N) {
//	Man m1;
//	char c;
//	Man* t;
//	N = N + 1;
//	t = new Man[N];
//		cin >> m1.Sname >> m1.name >> m1.b_date.day >> c >> m1.b_date.month >> c >> m1.b_date.year;
//		for (int i = 0; i < N - 1; i++)
//			t[i] = ms[i];
//		t[N - 1] = m1;
//
//		delete[] ms;
//		ms = t;
//}
//
//
//
//
//void Edit(Man*ms, int N) {
//	char poisk[20];
//	int option; int pos = -1;
//
//	cout << "1- dlya poiska po imeni, 2- dlya poiska po familyii" << endl;
//	cin >> option;
//	
//	switch (option)
//	{
//		case 1:
//			cout << "vvedite imya dlya poiska" << endl;
//			cin >> poisk;
//			for (int i = 0; i < N; i++)
//				if (searchByName(ms[i], poisk) == true)
//				{
//					pos = i;					
//					break;
//				}
//			break;
//		case 2:
//			cout << "vvedite familyiya dlya poiska" << endl;
//			cin >> poisk;
//			for (int i = 0; i < N; i++)
//				if (searchBySurName(ms[i], poisk) == true)
//				{
//					pos = i;					
//					break;
//				}
//			break;
//		default:
//			cerr << "Incorrect input" << endl;
//
//}
//	ms[pos].print();
//
//	if (pos != -1) 
//	{
//		cout << "1- dlya redaktirovaniya imeni" << endl;
//		cout << "2- dlya redaktirovaniya familyii" << endl;
//		cout << "3- dlya redaktirovaniya daty rojdeniya" << endl;
//
//
//		//while (true) {
//			cin >> option;
//			/*if (option == 0) break;*/
//			switch (option) {
//			case 1:
//				cout << "vvedite novoe imeni" << endl;
//				cin >> ms[pos].name;
//				break;
//			case 2:
//				cout << "vvedite novuyu familyiu" << endl;
//				cin >> ms[pos].Sname;
//				break;
//			case 3:
//				cout << "vvedite novuyu datu" << endl;
//				cout << "vvedite den', mecyac, god " << endl;
//				cin >> ms[pos].b_date.day >> ms[pos].b_date.month >> ms[pos].b_date.year;
//				break;
//
//			}
//
//
//		//}
//
//	}
//
//}
//
//
//void main() {
//	Man *ms;
//	int N,option;
//	inf >> N;
//	ms = new Man[N];
//	for (int i = 0; i < N; i++) {
//		ms[i].enter();
//		ms[i].print();
//	}
//	while (true) {
//		cout << "1-Sortirovat po imeny" << endl;
//		cout << "2-Sortirovat po familyi" << endl;
//		cout << "3-Vvyvod imenynnikov" << endl;
//		cout << "4-poisk po familyi" << endl;
//		cout << "5-Poisk po imeni" << endl;
//		cout << "6- redaktirovanie" << endl;
//		cout << "7- dobavlenie" << endl;
//		cout << "8- udalenie" << endl;
//		cout << "0- vyhod" << endl;
//		
//		cin >> option;
//		if (option == 0) { 
//		inf.close();
//		ouf.open("Mans.txt");
//		for (int i = 0; i < N; i++)
//			ouf << ms[i].name << " " << ms[i].Sname << " " << ms[i].b_date.day << "." << ms[i].b_date.month << "." << ms[i].b_date.year << endl;
//		break;
//		}
//		system("clr");
//		switch (option)
//		{
//		case 1:
//			sorting(ms, N, byName);
//			for (int i = 0; i < N; i++)
//				ms[i].print();
//			break;
//		case 2:
//			sorting(ms, N, bySurname);
//			for (int i = 0; i < N; i++)
//				ms[i].print();
//			break;
//		case 3:
//			searchBymonth(ms, N);
//			for (int i = 0; i < N; i++)
//				ms[i].print();
//			break;
//		case 4:
//			Searching(ms, N, searchByName);			
//			break;
//		case 5:
//			Searching(ms, N, searchBySurName);			
//			break;
//
//		case 6:
//			Edit(ms, N);
//			break;
//		case 7:
//			add(ms, N);
//			break;
//
//		default:
//			cerr << "Incorrect input" << endl;
//			break;
//		}
//	}
//	delete[] ms;
//}