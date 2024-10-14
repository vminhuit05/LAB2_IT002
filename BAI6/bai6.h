#include <bits/stdc++.h>
using namespace std;

class Diem {
private:
    double Hoanh;
    double Tung;
public:
    Diem() {
        Hoanh = 0;
        Tung = 0;
    }

    Diem(double Hoanh, double Tung) {
        this -> Hoanh = Hoanh;
        this -> Tung = Tung;
    }

    Diem(const Diem &x) {
        Hoanh = x.Hoanh;
        Tung = x.Tung;
    }

    void Xuat();

    double GetTungDo();

    double GetHoanhDo();

    void SetTungDo(double Tung);

    void SetHoanhDo(double Hoanh);

    void TinhTien(double _do, double d);

};

class TamGiac {
private:
    Diem A, B, C;

public:
    void Nhap();

    void Xuat();

    void TinhTien(double _do, double d);
};