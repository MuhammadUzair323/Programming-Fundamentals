#include<iostream>
using namespace std;
main()
{
    float bagpounds, sizearea, costperlb, bagcost, costperarea;
 cout<<"Please enter Weight of bag in Pounds: ";
 cin>>bagpounds;
 cout<<"Please enter Price of bag: ";
 cin>>bagcost;
 cout<<"PLease enter size area, the bag can cover: ";
 cin>>sizearea;

 costperlb=bagcost/bagpounds;
 cout<<"Cost of the fertilizer per pound: $"<<costperlb<<"\n";
 costperarea=bagcost/sizearea;
 cout<<"Cost of the fertilizer per sqaure foot: $"<<costperarea;
}