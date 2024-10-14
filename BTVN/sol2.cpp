#include <bits/stdc++.h>
using namespace std;

class PhanSo {
private:
    int tu, mau;
public:
    PhanSo() {
        tu = 0;
        mau = 1;
    }

    PhanSo(int tu, int mau) {
        this->tu = tu;
        this->mau = (mau == 0) ? 1 : mau;
    }

    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    void simplify() {
        int GCD = gcd(abs(tu), abs(mau));
        tu /= GCD;
        mau /= GCD;
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }

    void Nhap() {
        cout << "Nhap tu so: ";
        cin >> tu;
        cout << "Nhap mau so: ";
        cin >> mau;
        if (mau == 0) mau = 1;
        simplify();
    }

    void Xuat() {
        cout << tu << "/" << mau << endl;
    }

    bool operator>(const PhanSo &ps) const {
        return tu * ps.mau > mau * ps.tu;
    }

    bool operator<(const PhanSo &ps) const {
        return tu * ps.mau < mau * ps.tu;
    }
};

class arrPhanSo {
private:
    vector<PhanSo> arr;
public:
    void nhap(int n) {
        arr.resize(n);
        for (int i = 0; i < n; i++) {
            cout << "Nhap phan so thu " << i + 1 << ": " << endl;
            arr[i].Nhap();
        }
    }

    void laypslt(int k) {
        if (k > 0 && k <= arr.size()) {
            sort(arr.begin(), arr.end(), greater<PhanSo>());
            cout << "Phan so lon thu " << k << " la: ";
            arr[k-1].Xuat();
        } else {
            cout << "Gia tri k khong hop le!" << endl;
        }
    }

    void laypsnt(int k) {
        if (k > 0 && k <= arr.size()) {
            sort(arr.begin(), arr.end());
            cout << "Phan so nho thu " << k << " la: ";
            arr[k-1].Xuat();
        } else {
            cout << "Gia tri k khong hop le!" << endl;
        }
    }
};

int main() {
    int n, k;
    
    cout << "Nhap so phan so: ";
    cin >> n;
    arrPhanSo a;
    a.nhap(n);
    
    cout << "Nhap k de tim phan so lon thu k: ";
    cin >> k;
    a.laypslt(k);
    
    cout << "Nhap k de tim phan so nho thu k: ";
    cin >> k;
    a.laypsnt(k);

    return 0;
}
