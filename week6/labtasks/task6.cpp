#include<iostream>
using namespace std;
int main(){
    
    int sum = 0;
    float avg=0;
    int natnum[5]={1,2,3,4,5};
    for (int i = 0; i < 5; i=i+1)
    {
        sum+=natnum[i];
    }
     avg=sum/5;
    cout<<"The sum is: "<<sum<<endl;
    cout<<"The average is: "<<avg;
    

}
    
