#include<iostream>
#include<conio.h>
using namespace std;

class square {
	    int a, b;

public: 
	square(int l, int w) {a=l; b=w;}
	int gets() {
		return a*b;
	};
	int getp() {
		return 2*(a+b);};
};


class krug {
	    double  a,r;
public: 
	krug( double w) {r=w;}
	double gets() {
		return 3.14*(r*r);
	};
	double getp() {
		return 2*(3.14*r) ;};

};
void main()

{square a(2,12);
setlocale(LC_ALL,"Russian");
cout << "  ������� ��������������  " << a.gets();
cout << "  �������� ��������������  " << a.getp();
krug r(6);
cout << "  ������� �����  " << r.gets();
cout << "  �������� �����  " << r.getp();
system("pause");
}

