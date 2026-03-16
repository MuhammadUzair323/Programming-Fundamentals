#include <iostream>
using namespace std;
main()
{
    int n1 = 0, n2 = 1, next;
    int n;
    cout << "How many numbers of Fibonacci Series you want to print: ";
    cin >> n;
    if(n==1){
        cout<<"0"; 
    
    }
    else{
        cout << n1 << ", ";
        cout << n2;
    
    for(int x = 1; x < n - 1; x = x + 1)
    {
        next = n1 + n2;
        cout << ", " << next;
        n1 = n2;
        n2 = next;
    }
}
}