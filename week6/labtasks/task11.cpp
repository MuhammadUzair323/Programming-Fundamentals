#include <iostream>
using namespace std;

int main() {
    char text[100];
    cout << "Enter a word: ";
    cin >> text; 

    for (int i = 0; text[i] != '\0'; i++) {
        
        if (text[i] == 'z') {
            text[i] = 'a';
        }
        else {
            text[i] = text[i] + 1;
        }
    }

    cout << "Shifted word: " << text << endl;
    return 0;
}