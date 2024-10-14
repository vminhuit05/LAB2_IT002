#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

class List {
private:
    list<double> data;

public:
    void add(double x) {
        data.push_back(x);
    }

    void removeFirst(double x) {
        auto it = find(data.begin(), data.end(), x);
        if (it != data.end()) {
            data.erase(it);
        }
    }

    void removeAll(double x) {
        data.remove(x);
    }

    void update(int index, double y) {
        if (index < 0 || index >= static_cast<int>(data.size())) {
            return; // không làm gì nếu chỉ số không hợp lệ
        }
        auto it = next(data.begin(), index);
        *it = y; // thay đổi giá trị
    }

    void print() const {
        cout << "[";
        for (auto it = data.begin(); it != data.end(); ++it) {
            cout << *it;
            if (next(it) != data.end()) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
};

int main() {
    List list; // Khởi tạo danh sách rỗng
    int n;

    while (true) {
        cout << "Nhap chi thi (n = -1 de thoat): ";
        cin >> n;

        if (n == -1) {
            break; // Nhảy đến B3
        }
        
        if (n == 0) {
            double x;
            cout << "Nhap phan tu x: ";
            cin >> x;
            list.add(x);
        }
        else if (n == 1) {
            double x;
            cout << "Nhap phan tu x: ";
            cin >> x;
            list.removeFirst(x);
        }
        else if (n == 2) {
            double x;
            cout << "Nhap phan tu x: ";
            cin >> x;
            list.removeAll(x);
        }
        else if (n == 3) {
            int index;
            double y;
            cout << "Nhap chi so x va phan tu y: ";
            cin >> index >> y;
            list.update(index, y);
        }
    }

    cout << "Danh sach hien tai: ";
    list.print();

    return 0;
}
