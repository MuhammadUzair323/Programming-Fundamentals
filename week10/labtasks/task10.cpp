#include<iostream>
using namespace std;

char checkAlphabetCase(char c);

int main(){
    cout<<"Enter a character : ";
    char c;
    cin>>c;
    checkAlphabetCase(c);
    return 0;


}
char checkAlphabetCase(char c){
    string smallCase="Small";
    string capitalCase="Capital";
    if(c>=65&&c<=90){
        cout<<capitalCase;
    }
    else if(c>=97&&c<=122){
        cout<<smallCase;
    }
    else{
        cout<<"wrong input!";
    }
    return 0;
}