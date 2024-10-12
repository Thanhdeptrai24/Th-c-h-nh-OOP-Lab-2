#include "tamgiac.h"
#include<utility>
#include<iostream>
using namespace std;
tamgiac::tamgiac() {
	A = make_pair(0, 0);
	B = make_pair(0, 0);
	C = make_pair(0, 0);
};
void tamgiac::Nhap() {
	cout << "Nhap Tung Do va Hoanh Do Diem A:"<<endl;
	float x, y;
	cin >> x >> y;
	A = make_pair(x, y);
	cout << "Nhap Tung Do va Hoanh Do Diem B:"<<endl;

	cin >> x >> y;
	B = make_pair(x, y);
	cout << "Nhap Tung Do va Hoanh Do Diem C:"<<endl;

	cin >> x >> y;
	C = make_pair(x, y);
}
//void tamgiac::Xuat() {
//	cout <
//};
