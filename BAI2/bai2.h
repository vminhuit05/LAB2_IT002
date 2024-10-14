#ifndef BAI2_H
#define BAI2_H

class TamGiac {
private:
    double x1, y1; // Coordinates of the first vertex
    double x2, y2; // Coordinates of the second vertex
    double x3, y3; // Coordinates of the third vertex

public:
    // Constructor
    TamGiac();

    // Method to input the vertices of the triangle
    void Nhap();

    // Method to output the vertices of the triangle
    void Xuat();

    // Method to translate the triangle
    void TinhTien(double dx, double dy);

    // Method to scale up the triangle
    void PhongTo(double scale);

    // Method to scale down the triangle
    void ThuNho(double scale);

    // Method to rotate the triangle
    void Quay(double angle);
};

#endif
