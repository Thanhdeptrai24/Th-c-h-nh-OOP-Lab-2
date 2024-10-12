#pragma once

#include <utility>
using namespace std;
class tamgiac
{
private:
	pair<float,float> A, B, C;
public:
	tamgiac();
	void Nhap();
	void Xuat();
	void TinhTien(float dx,float dy);
	void PhongTo(float factor );
	void ThuNho(float factor);
	void Quay( float angel);
	



};

