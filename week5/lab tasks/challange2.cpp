#include<iostream>
using namespace std;
int main(){
    int largenum;cout<<"Enter a large number: ";
    cin>>largenum;
    int freq;cout<<"Enter the number for frequency: ";
    cin>>freq;
    int count;
    int templargenum=largenum;
    for(;largenum>0;largenum=largenum/10){
        int lastdigit= largenum%10;
        if(lastdigit==freq){
            count++;
        }
    }        
       if(templargenum==0&&freq==0){
        count=1;
    }
          cout<<"Frequency of "<<freq<<" in "<<templargenum<<" is "<<count;
            
}
