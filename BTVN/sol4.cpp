#include <bits/stdc++.h>
using namespace std;

class matrix {
private:
    vector<vector<int>> mat;
    int n;

public:
    matrix(int size) {
        n = size;
        mat.resize(n, vector<int>(n, 0));
    }

    matrix(const matrix& other) {
        n = other.n;
        mat = other.mat;
    }

    void nhap() {
        cout << "Nhap ma tran " << n << "x" << n << ":" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> mat[i][j];
            }
        }
    }

    void cal() {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                mat[i][j] = (mat[i][j] + 1) % 10;
            }
        }
    }

    bool sosanh(const matrix& other) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] != other.mat[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }

    void xuat() {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    int n;
    cin >> n;
    matrix mat(n);
    mat.nhap();
    matrix matsave(mat);

    int count = 1;
    mat.cal();

    while (!mat.sosanh(matsave)) {
        mat.cal();
        count++;
    }

    cout << count << endl;
    return 0;
}
