#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=5;i++){
        int num=5;
    
            for(int j=1;j<=i;j++){
                    cout<<num<< " ";
                    num--;
            }
        cout<<endl;
    }
    return 0;
}