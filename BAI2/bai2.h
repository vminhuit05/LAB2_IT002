#ifndef BAI2_H
#define BAI2_H

class TamGiac {
private:
    double x1, y1;
    double x2, y2;
    double x3, y3;

public:
    TamGiac();
    void Nhap();
    void Xuat();
    void TinhTien(double dx, double dy);
    void PhongTo(double scale);
    void ThuNho(double scale);
    void Quay(double angle);
};

#endif
