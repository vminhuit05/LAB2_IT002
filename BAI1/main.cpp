#include <iostream>
#include "bai1.h"
using namespace std;

int main() {
    Diem d1;

    double hoanh, tung;
    cout << "Nhap toa do cho diem (x y): ";
    cin >> hoanh >> tung;

    d1.SetHoanhDo(hoanh);
    d1.SetTungDo(tung);

    cout << "Diem d1: ";
    d1.Xuat();

    double dx, dy;
    cout << "Nhap gia tri tinh tien (dx dy): ";
    cin >> dx >> dy;
    d1.TinhTien(dx, dy);

    cout << "Diem d1 sau khi tinh tien: ";
    d1.Xuat();

    return 0;
}
