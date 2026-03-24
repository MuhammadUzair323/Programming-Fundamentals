#include<iostream>
using namespace std;
int main(){
    int n=0;
      cout<<"Enter the number of elements: \n";
      cin>>n;
      int nums[n];
      if(n<=0){cout<<"Invalid! Number should be greater than 0";}
      cout<<"Please enter numbers one per line \n";
      for(int i=0;i<n;i++){
      
      cin>>nums[i];
      }
      for(int i=n-1;i>=0;i--){
        cout<<nums[i]<<" ";
      
    }
    
     
    cout<<endl;
}