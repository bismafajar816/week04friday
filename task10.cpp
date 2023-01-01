#include <iostream>
using namespace std;
void pakistan();
void ireland();
void india();
void canada();
void england();
main()
{
 string name;
 int price;
 int discount;
 int total;
 string country;
 while(true)
 {
 cout<<"enter country name:";
 cin>>name;
 cout<<"enter price:";
 cin>>price;

 pakistan();
 india();
 ireland();
 canada();
 england();

 if(name == "pakistan")
 {
  discount = price * 0.05;
  total = price - discount;
  cout<<"total price:"<<total<<endl;
 }
 if(name == "india")
 {
  discount = price * 0.2;
  total = price - discount;
  cout<<"total price:"<<total<<endl;
 }
 if(name == "ireland")
 {
  discount = price * 0.10;
  total = price - discount;
  cout<<"total price:"<<total<<endl;
 }
 if(name == "england")
 {
  discount = price * 0.30;
  total = price - discount;
  cout<<"total price:"<<total<<endl;
 }
 if(name == "canada")
 {
  discount = price * 0.45;
  total = price - discount;
  cout<<"total price:"<<total<<endl;
 }
 }
}
void pakistan()
{
  int discount;
  int total;
  int price;
}
void india()
{
  int discount;
  int total;
  int price;
}
void ireland()
{
  string name;
  int discount;
  int total;
  int price;

}
void england()
{
  int discount;
  int total;
  int price;
}
void canada()
{
  int discount;
  int total;
  int price;
}