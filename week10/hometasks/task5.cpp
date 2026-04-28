#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience){
    float bonus = 0;
    if(score>=90){
        bonus = base*0.20;
    }
    else if(score>=75 && score<=89){
        bonus = base*0.10;
    }else{
        bonus = base*0.05;
    }

    if(experience>=5){
        bonus+=base*0.05;
    }

    float final_salary = base+bonus;
    
    return final_salary;
}

main(){

    float base;
    cout<<"Enter base: ";
    cin>>base;
    int score;
    cout<<"Enter score: ";
    cin>>score;
    int experience;
    cout<<"Enter experience: ";
    cin>>experience;
    cout<<calculateSalary(base,score,experience);

}