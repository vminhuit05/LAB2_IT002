#include <bits/stdc++.h>
using namespace std;

class phanso {
public:
    int tu, mau;

    phanso(int tu = 0, int mau = 1) {
        this->tu = tu;
        this->mau = (mau == 0) ? 1 : mau;
        rutgon();
    }

    void rutgon() {
        int gcd = __gcd(abs(tu), abs(mau));
        tu /= gcd;
        mau /= gcd;
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }

    phanso operator+(const phanso& other) const {
        phanso result;
        result.tu = tu * other.mau + mau * other.tu;
        result.mau = mau * other.mau;
        result.rutgon();
        return result;
    }

    bool operator==(const phanso& other) const {
        return tu == other.tu && mau == other.mau;
    }

    void Xuat() const {
        cout << tu << "/" << mau << endl;
    }
};

void timtcon(const vector<phanso>& arr, const phanso& target) {
    int n = arr.size();
    bool found = false;

    for (int mask = 1; mask < (1 << n); ++mask) {
        phanso sum;

        cout << "Tap con: ";
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                sum = sum + arr[i];
                arr[i].Xuat();
            }
        }

        if (sum == target) {
            cout << " -> Tong bang phan so dich." << endl;
            found = true;
        } else {
            cout << " -> Khong bang phan so dich." << endl;
        }
    }

    if (!found) {
        cout << "Khong co tap con nao co tong bang phan so dich." << endl;
    }
}

int main() {
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;

    vector<phanso> arr(n);
    cout << "Nhap danh sach cac phan so: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Nhap tu so thu " << i + 1 << ": ";
        cin >> arr[i].tu;
        cout << "Nhap mau so thu " << i + 1 << ": ";
        cin >> arr[i].mau;
        arr[i].rutgon();
    }
    
    phanso psdich;
    cout << "Nhap phan so dich: " << endl;
    cout << "Nhap tu so dich: ";
    cin >> psdich.tu;
    cout << "Nhap mau so dich: ";
    cin >> psdich.mau;

    psdich.rutgon();

    timtcon(arr, psdich);

    return 0;
}
