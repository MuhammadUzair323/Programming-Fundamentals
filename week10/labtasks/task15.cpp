#include <iostream>
using namespace std;

string calculatePoolState(float V,float P1,float P2,float H);

main()
{
float V;
cout<<"Enter volume of the pool in liters: ";
cin>>V;
float P1;
cout<<"Enter flow rate of the first pipe per hour: ";
cin>>P1;
float P2;
cout<<"Enter flow rate of the second pipe per hour: ";
cin>>P2;
float H;
cout<<"Enter hours that the worker is absent: ";
cin>>H;
    string result = calculatePoolState(V,P1,P2,H);
    cout << result;
}

string calculatePoolState(float V,float P1,float P2,float H)
{
    int t_water = (P1+P2)*H;
    
    int pool_per, pipe1_contri, pipe2_contri;
    if(t_water<=V){
    pool_per = (t_water/V)*100;
    pipe1_contri = ((P1*H)/t_water)*100;
    pipe2_contri = ((P2*H)/t_water)*100;

    return "The pool is "+to_string(pool_per)+"% full. Pipe 1: "+to_string(pipe1_contri)+"%. Pipe 2: "+to_string(pipe2_contri)+"%.";
}else{
    int overflow;
    overflow = t_water-V;
    return "For "+to_string(H)+" hours, the pool overflows with : "+to_string(overflow)+" liters.";
}

}