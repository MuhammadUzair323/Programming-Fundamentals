#include<iostream>
using namespace std;
main()
{
    float priceadult, pricechild, ticketadultsold, ticketchildsold, charitypercentage, earnedmoney, charity;
    string name;
    cout<<"Please enter Name of the Movie: ";
    cin>>name;
    cout<<"Please enter Price of adult ticket: ";
    cin>>priceadult;
    cout<<"Please enter Price of childern ticket: ";
    cin>>pricechild;
    cout<<"Please enter number of adult tickets sold: ";
    cin>>ticketadultsold;
    cout<<"Please enter Price of childern tickets sold: ";
    cin>>ticketchildsold;
    cout<<"Please enter Percentage of total money to donate to charity: ";    
    cin>>charitypercentage;

    earnedmoney=(priceadult*ticketadultsold)+(pricechild*ticketchildsold);
    charity=charitypercentage*earnedmoney/100;
    cout<<"Name: "<<name;
    cout<<"Total amount generated from ticket sales : $"<<earnedmoney<<"\n";
    cout<<"Donation to charity ("<<charitypercentage<<"%) : $"<<charity<<"\n";
    cout<<"Remaining amount after donation: $"<<earnedmoney-charity; 

}