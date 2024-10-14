#include <iostream>
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

    bool operator>(const PhanSo &ps) {
        return tu * ps.mau > mau * ps.tu;
    }

    bool operator<(const PhanSo &ps) {
        return tu * ps.mau < mau * ps.tu;
    }
};

class arrPhanSo {
private:
    PhanSo *arr;
    int size;
public:
    arrPhanSo() {
        arr = nullptr;
        size = 0;
    }

    ~arrPhanSo() {
        delete[] arr;
    }

    void nhap(int n) {
        size = n;
        arr = new PhanSo[n];
        for (int i = 0; i < n; i++) {
            cout << "Nhap phan so thu " << i + 1 << ": " << endl;
            arr[i].Nhap();
        }
    }

    PhanSo laypsln() {
        PhanSo max = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    PhanSo laypsnn() {
        PhanSo min = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }
};

int main() {
    int n;
    cout << "Nhap so phan so: ";
    cin >> n;

    arrPhanSo a;
    a.nhap(n);

    cout << "Phan so lon nhat la: " << endl;
    a.laypsln().Xuat();

    cout << "Phan so nho nhat la: " << endl;
    a.laypsnn().Xuat();

    return 0;
}
