#include<bits/stdc++.h>
using namespace std;

class ThiSinh {
private:
    string Ten;
    string MSSV;
    int iNgay, iThang, iNam;
    float fToan, fVan, fAnh;

public:
    void Nhap();

    void Xuat();
//tong diem 3 mon
    float Tong();
};