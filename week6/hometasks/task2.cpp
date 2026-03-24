#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int num[n];
    int count=0;
    cout<<"Enter Numbers one per line: "<<endl;
    for(int i=0;i<n;i++){
        cin>>num[i];

    }
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            count++;
        }
    }
    cout<<"There are "<<count<<" even numbers";
}