#include "bai1.h"
#include <iostream>

using namespace std;

Diem::Diem() : iHoanh(0), iTung(0) {}

Diem::Diem(double Hoanh, double Tung) : iHoanh(Hoanh), iTung(Tung) {}

Diem::Diem(const Diem& x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

void Diem::Xuat() {
    cout << "(" << iHoanh << ", " << iTung << ")" << endl;
}

double Diem::GetTungDo() {
    return iTung;
}

double Diem::GetHoanhDo() {
    return iHoanh;
}

void Diem::SetTungDo(double Tung) {
    iTung = Tung;
}

void Diem::SetHoanhDo(double Hoanh) {
    iHoanh = Hoanh;
}

void Diem::TinhTien(double dx, double dy) {
    iHoanh += dx;
    iTung += dy;
}
