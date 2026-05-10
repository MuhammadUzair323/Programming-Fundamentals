#include <iostream>
using namespace std;
int totalSum(int matrix[][3], int rowsize){
    int sum=0;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<3;j++){
            sum=sum+matrix[i][j];
        }
    }
    return sum;
}

int main()
{
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;
    int matrix[rowSize][3];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element at position ["<<i<<"]["<<j<<"] : ";
            cin >> matrix[i][j];
           
        }
    }
    cout<<"Total sum is : "<<totalSum(matrix, rowSize);
}