// Given an n x m matrix 'a', return all elements of the matrix in spiral order.

#include<iostream>
#include<vector>
using namespace std;

void spiralOrder (vector<vector<int>> &matrix) {

    int left = 0;
    int right = matrix[0].size() - 1;
    int top = 0;
    int bottom = matrix.size() - 1;

    int direction = 0;

    while (left <= right && top <= bottom) {
        // left -> right

        if (direction == 0) {
            for (int col = left; col <= right; col++) {
                cout << matrix[top][col] << " ";
            }
            top++;
        }
        // top -> bottom
        else if (direction == 1) {
            for (int row = top; row <= bottom; row++) {
                cout << matrix[row][right] << " ";
            }
            right--;
        }
        // right -> left

        else if (direction == 2) {
            for (int col = right; col >= left; col--) {
                cout << matrix[bottom][col] << " ";
            }
            bottom--;
        }
        // bottom -> top
        else {
            for (int row = bottom; row >= top; row--) {
                cout << matrix[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
        // 0, 1, 2, 3
    }
}

int main () {

    int n, m;

    cout << "Enter the no of rows in matrix: ";
    cin >> n;

    cout << "Enter the no of columns in matrix: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int> (m));

    cout << "Enter the elements of matrix: " << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Spiral of the given matrix: ";

    spiralOrder (matrix);

    return 0;
}