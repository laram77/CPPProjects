//#include<iostream>
//using namespace std;
//
//class Point {	
//private:
//	int x, y;
//public:
//	//модификатор
//	void setPoint_x(int xx) { x = xx; }
//	void setPoint_y(int yy) { y = yy; }
//	//инспектор
//	int getPoint_x() { return x; }
//	int getPoint_y() { return y; }
//
//	Point() 
//	{ 		
//		cout << "Point constructor." << endl;
//	}
//
//	~Point()
//	{
//		cout << "Destructor." << endl;
//	}
//};
//
//class Figure {
//public:	
//	Point ms[100];
//};
//
//class Circle:    public Figure {};
//class Triangle:  public Figure {};
//class Rectangle: public Figure {};
//
//int main() {
//	Point * pn = new Point();
//	//Circle cr;
//	//Triangle tr;
//	//Rectangle rtn;
//
//	//Figure *f;
//	//f = &cr;
//
//	//int q,w;
//	//cout << "Vvedite pointy q,w: ";
//	//cin >> q >> w;
//	//pn.setPoint_x(q);
//	//cout << pn.getPoint_x() << endl;
//	//pn.setPoint_y(w);
//	//cout << pn.getPoint_y() << endl;
//
//	////наследование
//	//fg.ms[0].getPoint_x();	
//	//cr.ms[0].getPoint_x();
//	//tr.ms[0].getPoint_x();
//	//rtn.ms[0].getPoint_x();
//
//	delete pn;
//
//	system("pause");
//	return 0;
//}