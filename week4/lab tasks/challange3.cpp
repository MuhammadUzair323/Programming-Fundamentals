#include<iostream>
using namespace std;
main() {
    string word1, word2;
    cout<< "Enter the first word: ";
    cin>> word1;
    cout<< " Enter the second word: ";
    cin>> word2;

    if( word1 == word2){
        cout<<" yes, the words are same";

    }
    else{
        cout<< "No, the words are different";
    }
}