#include <iostream>
using namespace std;

string veh_type;
float veh_tax(char veh_code, int veh_price ){
    float tax_rate;
    if(veh_code=='M'){
        tax_rate=6;
        veh_type="Motorcycle";
    }
    else if(veh_code=='E'){
        tax_rate=8;
        veh_type="Electric";
    }
    else if(veh_code=='S'){
        tax_rate=10;
        veh_type="Sedan";
    }
    else if(veh_code=='V'){
        tax_rate=12;
        veh_type="Van";
    }
    else if(veh_code=='T'){
        tax_rate=15;
        veh_type="Truck";
    }
    float tax_amount = veh_price * (tax_rate/100.0);
    return tax_amount;
}

main(){
char veh_code;
cout<<"Enter Vehicle Type Code (M/E/S/V/T): ";
cin>>veh_code;
int veh_price;
cout<<"Enter Vehicle Price: ";
cin>>veh_price;

float final_price = veh_price+veh_tax(veh_code, veh_price );
cout<<"The final price on a vehicle of type " <<veh_type<<" after adding the tax is $"<<final_price;

}