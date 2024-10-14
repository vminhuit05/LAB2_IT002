#include <iostream>
#include <list>
#include <algorithm> // for std::remove

class List {
private:
    std::list<double> data; // Danh sách chứa các phần tử

public:
    // Thêm phần tử vào cuối danh sách
    void add(double x) {
        data.push_back(x);
    }

    // Xóa phần tử đầu tiên có giá trị x
    void removeFirst(double x) {
        auto it = std::find(data.begin(), data.end(), x);
        if (it != data.end()) {
            data.erase(it);
        }
    }

    // Xóa tất cả các phần tử có giá trị x
    void removeAll(double x) {
        data.remove(x);
    }

    // Thay đổi phần tử thứ x bằng y
    void update(int index, double y) {
        if (index < 0 || index >= static_cast<int>(data.size())) {
            return; // không làm gì nếu chỉ số không hợp lệ
        }
        auto it = std::next(data.begin(), index); // di chuyển iterator đến vị trí index
        *it = y; // thay đổi giá trị
    }

    // In danh sách hiện tại
    void print() const {
        std::cout << "[";
        for (auto it = data.begin(); it != data.end(); ++it) {
            std::cout << *it;
            if (std::next(it) != data.end()) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }
};

int main() {
    List list; // Khởi tạo danh sách rỗng
    int n;

    while (true) {
        std::cout << "Nhap chi thi (n = -1 de thoat): ";
        std::cin >> n;

        if (n == -1) {
            break; // Nhảy đến B3
        }
        
        if (n == 0) {
            double x;
            std::cout << "Nhap phan tu x: ";
            std::cin >> x;
            list.add(x);
        }
        else if (n == 1) {
            double x;
            std::cout << "Nhap phan tu x: ";
            std::cin >> x;
            list.removeFirst(x);
        }
        else if (n == 2) {
            double x;
            std::cout << "Nhap phan tu x: ";
            std::cin >> x;
            list.removeAll(x);
        }
        else if (n == 3) {
            int index;
            double y;
            std::cout << "Nhap chi so x va phan tu y: ";
            std::cin >> index >> y;
            list.update(index, y);
        }
    }

    // B3: In ra danh sách hiện tại
    std::cout << "Danh sach hien tai: ";
    list.print();

    return 0; // B4: Kết thúc chương trình
}
