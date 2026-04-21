#include<iostream>
using namespace std;
string convertToEnglish(int num1){
int number;
    number=num1%10;

    string first, second;
    if(number==0){second="zero";}
    if(number==1){second="one";}
    if(number==2){second="two";}
    if(number==3){second="three";}
    if(number==4){second="four";}
    if(number==5){second="five";}
    if(number==6){second="six";}
    if(number==7){second="seven";}
    if(number==8){second="eight";}
    if(number==9){second="nine";}

    if(num1==10){second="ten";}
    if(num1==11){second="eleven";}
    if(num1==12){second="twelve";}
    if(num1==13){second="thirteen";}
    if(num1==14){second="fourteen";}
    if(num1==15){second="fifteen";}
    if(num1==16){second="sixteen";}
    if(num1==17){second="seventeen";}
    if(num1==18){second="eighteen";}
    if(num1==19){second="nineteen";}

    if(num1>=20&&num1<30){first="twenty";}
    if(num1>=30&&num1<40){first="thirty";}
    if(num1>=40&&num1<50){first="forty";}
    if(num1>=50&&num1<60){first="fifty";}
    if(num1>=60&&num1<70){first="sixty";}
    if(num1>=70&&num1<80){first="seventy";}
    if(num1>=80&&num1<90){first="eighty";}
    if(num1>=90&&num1<100){first="ninety";}

    if(num1==100){first="hundered";}
    return first +" "+ second;

}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<convertToEnglish(number);
}