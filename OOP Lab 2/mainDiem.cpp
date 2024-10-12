#include <iostream>
#include "Diem.h"
using namespace std;
int main() {
	
    // Tạo đối tượng Diem sử dụng phương thức không tham số
    Diem A;
    A.Xuat();

    // Tạo đối tượng Diem sử dụng phương thức có tham số
    Diem B(5, 10);
    B.Xuat();

    // Tạo đối tượng Diem sử dụng phương thức sao chép
    Diem C(B);
    C.Xuat();

    // Sử dụng các phương thức getter và setter
    C.SetHoanhDo(15);
    C.SetTungDo(20);
    C.Xuat();

    // Tịnh tiến đối tượng B
    B.TinhTien(2, 3);
    B.Xuat();

    return 0;
	
}