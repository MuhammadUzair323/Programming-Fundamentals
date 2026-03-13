#include<iostream>
using namespace std;
int main(){
      int noofred,noofwhite,nooftulips;
      float pricered=2.00,pricewhite=4.10,pricetulip=2.50;
      float discount,totalprice,price_discount;
      cout<<"Enter no of red roses: ";
      cin>>noofred;
      cout<<"Enter no of white roses: ";
      cin>>noofwhite;
      cout<<"Enter no of tulips: ";
      cin>>nooftulips;
      totalprice=(noofwhite*pricewhite)+(noofred*pricered)+(nooftulips*pricetulip);
      if(totalprice>200){
           discount=totalprice*0.20;
      }
      price_discount=totalprice-discount;
      cout<<"Original Price: "<<totalprice<<"\n";
      cout<<"Discounted Price: "<<price_discount;
      

}
