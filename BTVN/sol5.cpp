#include <bits/stdc++.h>
using namespace std;

struct rectangle {
    int x, y, w, h;
    rectangle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}
};

vector<rectangle> solve(vector<vector<int>>& matrix, int m, int n) {
    vector<rectangle> rectangles;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 1) {
                int width = 0, height = 0;

                while (j + width < n && matrix[i][j + width] == 1) {
                    ++width;
                }

                while (i + height < m) {
                    bool full_row = true;
                    for (int k = 0; k < width; ++k) {
                        if (matrix[i + height][j + k] != 1) {
                            full_row = false;
                            break;
                        }
                    }
                    if (!full_row) break;
                    ++height;
                }

                for (int r = i; r < i + height; ++r) {
                    for (int c = j; c < j + width; ++c) {
                        matrix[r][c] = 0;
                    }
                }

                rectangles.push_back(rectangle(i, j, width, height));
            }
        }
    }

    return rectangles;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<rectangle> rectangles = solve(matrix, m, n);

    for (auto rect : rectangles) {
        cout << "[" << rect.x << ", " << rect.y << ", " << rect.w << ", " << rect.h << "]\n";
    }

    return 0;
}
