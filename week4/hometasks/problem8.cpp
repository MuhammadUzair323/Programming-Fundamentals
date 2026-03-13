#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Please enter number: ";
    cin>>number;
    int num1;
    num1=number%10;
    string first, second;
    if(num1==0){second="zero";}
    if(num1==1){second="one";}
    if(num1==2){second="two";}
    if(num1==3){second="three";}
    if(num1==4){second="four";}
    if(num1==5){second="five";}
    if(num1==6){second="six";}
    if(num1==7){second="seven";}
    if(num1==8){second="eight";}
    if(num1==9){second="nine";}

    if(number==10){second="ten";}
    if(number==11){second="eleven";}
    if(number==12){second="twelve";}
    if(number==13){second="thirteen";}
    if(number==14){second="fourteen";}
    if(number==15){second="fifteen";}
    if(number==16){second="sixteen";}
    if(number==17){second="seventeen";}
    if(number==18){second="eighteen";}
    if(number==19){second="nineteen";}

    if(number>=20&&number<30){first="twenty";}
    if(number>=30&&number<40){first="thirty";}
    if(number>=40&&number<50){first="forty";}
    if(number>=50&&number<60){first="fifty";}
    if(number>=60&&number<70){first="sixty";}
    if(number>=70&&number<80){first="seventy";}
    if(number>=80&&number<90){first="eighty";}
    if(number>=90&&number<100){first="ninety";}

    if(number==100){first="hundered";}

    cout<<first<<" "<<second;
    

}