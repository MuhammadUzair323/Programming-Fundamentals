#include <iostream>
using namespace std;
void largestColumnFirst(int M[][5], int rows, int cols) {
    int maxSum = -999999; 
    int largestColIndex = 0;

    
    for (int j = 0; j < cols; j++) {
        int currentColumnSum = 0;
        for (int i = 0; i < rows; i++) {
            currentColumnSum += M[i][j];
        }
        
        if (currentColumnSum > maxSum) {
            maxSum = currentColumnSum;
            largestColIndex = j;
        }
    }

    for (int i = 0; i < rows; i++) {
        int temp = M[i][0];
        M[i][0] = M[i][largestColIndex];
        M[i][largestColIndex] = temp;
    }
}


void printMatrix(int M[][5], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols = 5; 
    int matrix[5][5];

    cout << "Enter row size: ";
    cin >> rows;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:" << endl;
    printMatrix(matrix, rows, cols);

    largestColumnFirst(matrix, rows, cols);

    cout << "\nMatrix after largest column moved to first:" << endl;
    printMatrix(matrix, rows, cols);

    return 0;
}