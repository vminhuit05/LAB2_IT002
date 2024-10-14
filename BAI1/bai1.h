#ifndef BAI1_H
#define BAI1_H

class Diem {
private:
    double iHoanh;
    double iTung;

public:
    Diem();

    Diem(double Hoanh, double Tung);

    Diem(const Diem& x);

    void Xuat();
    double GetTungDo();
    double GetHoanhDo();
    void SetTungDo(double Tung);
    void SetHoanhDo(double Hoanh);
    void TinhTien(double dx, double dy);
};

#endif
