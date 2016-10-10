#include<iostream.h>
#include<conio.h>
int main(void)
{
int quantity,buyingamount;
       float servicetax2;
float brokeragerate;
int price;
cout<<"enter price";
cin>>price;
cout<<"enter quantity";
cin>>quantity;
buyingamount=price*quantity;
cout<<"enter brokerage rate";
cin>>brokeragerate;
float brokeragecharge=((brokeragerate*buyingamount)/100);
float servicetax=10.36;
servicetax2=float( brokeragecharge*10.36/100.0);
float   sellingamount=brokeragerate+servicetax2;
float stt=0.025;
float totalchargeonselling=brokeragerate+servicetax2+stt;
float totalcost=sellingamount+totalchargeonselling;
cout<<"enter selling rateand quantity";
cin>>price>>quantity;
int sellingprice=price*quantity;

int stampduty=200,regulatorycharge=400;
int turnover=buyingamount+sellingprice+stampduty+regulatorycharge;
float dd=(turnover*0.006)/100.0;
float totalamount=totalcost+dd;
float profit=100-totalamount;
cout<<"profit is"<<profit;
return 0;
}