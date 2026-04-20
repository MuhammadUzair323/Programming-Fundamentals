#include<iostream>
using namespace std;
int multiply(int num1);

int main()
{
    int num1;
    cout<<"Enter a number : ";
    cin>>num1;
  cout<<"answer : "<<multiply(num1);
    return 0;


}
int multiply(int num1)
{
  int answer;
  answer=num1*5;
  return answer;
}