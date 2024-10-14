#include <iostream>
#include "bai1.h"
using namespace std;

int main() {
    Diem d1;  // Default constructor

    double hoanh, tung;
    cout << "Enter the coordinates for the point (x y): ";
    cin >> hoanh >> tung;

    d1.SetHoanhDo(hoanh);
    d1.SetTungDo(tung);

    cout << "Point d1: ";
    d1.Xuat();

    double dx, dy;
    cout << "Enter the translation values (dx dy): ";
    cin >> dx >> dy;
    d1.TinhTien(dx, dy);

    cout << "Point d1 after translation: ";
    d1.Xuat();

    return 0;
}
