#include <iostream>
using namespace std;
void flowers();
main()
{
 flowers();
}
void flowers()
{
 int whiterose;
 int redrose;
 int tulip;
 float total;
 float discountedTotal;
 cout <<"enter white rose:";
 cin>>whiterose;
 cout <<"enter red rose:";
 cin>>redrose;
 cout <<"enter tulips:";
 cin>>tulip;
 total = whiterose*2 + redrose*4.10 + tulip*2.50;
 discountedTotal = total - total*0.2;
 if(total < 200)
 {
  cout<<"total price is:"<<total;

 }
 if(total > 200)
 {
  cout<<"total price:"<<total<<endl;
  cout<<"price after discount:"<<discountedTotal;
 }
}
