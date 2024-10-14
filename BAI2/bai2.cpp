#include "bai2.h"
#include <iostream>
#include <cmath> // For cos and sin functions

using namespace std;

// Default constructor
TamGiac::TamGiac() : x1(0), y1(0), x2(0), y2(0), x3(0), y3(0) {}

// Method to input the vertices of the triangle
void TamGiac::Nhap() {
    cout << "Nhap toa do dinh A (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Nhap toa do dinh B (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Nhap toa do dinh C (x3, y3): ";
    cin >> x3 >> y3;
}

// Method to output the vertices of the triangle
void TamGiac::Xuat() {
    cout << "Dinh A: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Dinh B: (" << x2 << ", " << y2 << ")" << endl;
    cout << "Dinh C: (" << x3 << ", " << y3 << ")" << endl;
}

// Method to translate the triangle
void TamGiac::TinhTien(double dx, double dy) {
    x1 += dx;
    y1 += dy;
    x2 += dx;
    y2 += dy;
    x3 += dx;
    y3 += dy;
}

// Method to scale up the triangle
void TamGiac::PhongTo(double scale) {
    x1 *= scale;
    y1 *= scale;
    x2 *= scale;
    y2 *= scale;
    x3 *= scale;
    y3 *= scale;
}

// Method to scale down the triangle
void TamGiac::ThuNho(double scale) {
    x1 /= scale;
    y1 /= scale;
    x2 /= scale;
    y2 /= scale;
    x3 /= scale;
    y3 /= scale;
}

// Method to rotate the triangle
void TamGiac::Quay(double angle) {
    double radians = angle * (3.14159265358979323846 / 180.0); // Convert degrees to radians
    double cosAngle = cos(radians);
    double sinAngle = sin(radians);

    // Apply rotation to each vertex
    double newX1 = x1 * cosAngle - y1 * sinAngle;
    double newY1 = x1 * sinAngle + y1 * cosAngle;

    double newX2 = x2 * cosAngle - y2 * sinAngle;
    double newY2 = x2 * sinAngle + y2 * cosAngle;

    double newX3 = x3 * cosAngle - y3 * sinAngle;
    double newY3 = x3 * sinAngle + y3 * cosAngle;

    x1 = newX1; y1 = newY1;
    x2 = newX2; y2 = newY2;
    x3 = newX3; y3 = newY3;
}
