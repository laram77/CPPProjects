//#include<iostream>
//#include<fstream>
//#include<string>
//#include<windows.h>
//using namespace std;
//
//ifstream inf("Mans.txt");
//ofstream ouf;
//struct TEL { string Sname, name; string phone;
//
//void enter() {
//	char c;
//	inf >> Sname >> name >> phone;
//}
//
//void print() {
//	cout << Sname << " " << name << " " << phone << endl;
//}
//};
//
//bool byName(TEL m1, TEL m2) {
//	return (m1.name > m2.name);
//}
//
//bool bySurname(TEL m1, TEL m2) {
//	return (m1.Sname > m2.Sname);
//}
//
//bool byphone(TEL m1, TEL m2) {
//	return (m1.phone > m2.phone);
//}
//
//void sorting(TEL*ms, int N, bool(*f)(TEL, TEL)) {
//	for (int i = 0; i < N - 1; i++)
//		for (int j = 0; j < N - 1; j++)
//			if (f(ms[j], ms[j + 1]) == true)
//				swap(ms[j], ms[j + 1]);
//
//}
//
//bool searchByName(TEL m, char *c) {
//	if (strstr(m.name.c_str(), c))
//		return true;
//	else return false;
//}
//
//bool searchBySurName(TEL m, char *c) {
//	if (strstr(m.Sname.c_str(), c))
//		return true;
//	else return false;
//}
//
//void Searching(TEL *ms, int N, bool(*f)(TEL, char*)) {
//	char text[20];
//	cin >> text;
//	for (int i = 0; i < N; i++)
//		if (f(ms[i], text) == true)
//			ms[i].print();
//}
//
//
//void add(TEL *&ms, int &N) {
//	TEL m1;
//	char c;
//	TEL* t;
//	N = N + 1;
//	t = new TEL[N];
//		cin >> m1.Sname >> m1.name >> m1.phone;
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
//void Edit(TEL*ms, int N) {
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
//			cin >> option;
//
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
//				cout << "vvedite novuy tel.nomer" << endl;
//				cin >> ms[pos].phone;
//				break;
//
//			}
//
//	}
//
//}
//
//
//void main() {
//	TEL *ms;
//	int N,option;
//	inf >> N;
//	ms = new TEL[N];
//	for (int i = 0; i < N; i++) {
//		ms[i].enter();
//		ms[i].print();
//	}
//	while (true) 
//	{
//		cout << "1-Sortirovat po imeny" << endl;
//		cout << "2-Sortirovat po familyi" << endl;		
//		cout << "3-poisk po familyi" << endl;
//		cout << "4-Poisk po imeni" << endl;
//		cout << "5- redaktirovanie" << endl;
//		cout << "6- dobavlenie" << endl;
//		cout << "7- udalenie" << endl;
//		cout << "0- vyhod" << endl;
//		
//		cin >> option;
//		if (option == 0) 
//		{ 
//		inf.close();
//		ouf.open("Mans.txt");
//		for (int i = 0; i < N; i++)
//			ouf << ms[i].name << " " << ms[i].Sname << " " << ms[i].phone << endl;
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
//			Searching(ms, N, searchByName);			
//			break;
//		case 4:
//			Searching(ms, N, searchBySurName);			
//			break;
//
//		case 5:
//			Edit(ms, N);
//			break;
//		case 6:
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