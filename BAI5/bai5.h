#include <bits/stdc++.h>
using namespace std;

class Diem {
private:
    double Hoanh;
    double Tung;
public:
//constructor ko tham so
    Diem() {
        Hoanh = 0;
        Tung = 0;
    }

//constructor co tham so
    Diem(double Hoanh, double Tung) {
        this -> Hoanh = Hoanh;
        this -> Tung = Tung;
    }

//copy constructor
    Diem(const Diem &x) {
        Hoanh = x.Hoanh;
        Tung = x.Tung;
    }

    void Xuat();

// 4 getter va setter cho hoanh do va tung do
    double GetTungDo();

    double GetHoanhDo();

    void SetTungDo(double Tung);

    void SetHoanhDo(double Hoanh);

//tinh tien diem di 1 doan delta x va 1 doan delta y
    void TinhTien(double dx, double dy);

// nhan doi toa do diem do
    void nhandoi();

// gan toa do ve thanh goc toa do
    void GanGoc();
};