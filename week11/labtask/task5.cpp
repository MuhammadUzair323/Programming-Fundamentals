#include<iostream>
using namespace std;
bool identityMatrix(int matrix[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                // Diagonal must be 1
                if(matrix[i][j] != 1){
                    return false;
                }
            } else {
                // Off-diagonal must be 0
                if(matrix[i][j] != 0){
                    return false;
                }
            }
        }
    }
    return true;  // Only if all checks pass
}

int main()
{
    int matrix[3][3]={
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    if(identityMatrix(matrix)){
          cout<<"yes";
    }else{
        cout<<"no";
    }
    
}