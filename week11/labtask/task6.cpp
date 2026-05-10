#include<iostream>
using namespace std;
string fire(string board[5][5],string coord ){
int row = coord[0]-'A';
int col = coord[1]-'1';
if (row<0 || row>=5 || col<0 || col >= 5){
    return "Out of bounds";
}
if (board[row][col]=="*"){
    return "BOOM";
}
else{return "SPLASH";}
}
main(){
    string  board[5][5]{
        {".",".",".","*","*"},
        {".","*",".",".","."},
        {".","*",".",".","."},
        {".","*",".",".","."},
        {".",".","*","*","."},
    };
    string input;
    cout<<"Enter coordinate to fire torpedo (A1,B3,E5): ";
    cin>>input;
    cout<<"Result:"<<fire(board,input);
}
