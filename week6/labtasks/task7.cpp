#include<iostream>
using namespace std;
bool check(string word, char letter)
{
    bool isFound = false;
    for (int i=0; word[i] != '\0'; i++)
    {
        if (word[i]==letter)
        {
            isFound= true;
            break;
        }
    }
    return isFound;
}
int main(){
    string word;
    char letter;
    cout<<"Enter word : ";
    cin>>word;
    cout<<"Enter letter for checking ";
    cin>>letter;
    if(check(word, letter))
    {
        cout<<letter<<" is found in "<<word;
    }
    else{
         cout<<letter<<" is not found in "<<word;
    }


}