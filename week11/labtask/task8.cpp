#include <iostream>
using namespace std;

// Function to count identical rows
int countIdenticalRows(int arr[][3], int numRows) {
    int totalIdentical = 0;
    
    
    for (int i = 0; i < numRows; i++) {
        
        for (int j = i + 1; j < numRows; j++) {
            
            bool match = true;
            for (int k = 0; k < 3; k++) {
                if (arr[i][k] != arr[j][k]) {
                    match = false;
                    break;
                }
            }
            
            if (match) {
                totalIdentical += 2; 
            }
        }
    }
    return totalIdentical;
}

int main() {
    int numRows;
    cout << "Enter the number of rows for the array: ";
    cin >> numRows;

    int arr[numRows][3]; 

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int result = countIdenticalRows(arr, numRows);
    cout << "The count of identical rows in the array is: " << result << endl;

    return 0;
}