#include <iostream>
using namespace std;
void equal(int x, int y);
main()
{
 int x;
 int y;
 while(true)
 {
  cout <<"enter number:";
  cin>>x;
  cout<<"enter number:";
  cin>>y;
  equal(x, y);
 }
}
void equal(int x, int y)
{ 
 if(x==y)
 {
  cout<<"true"<<endl;
 }
 if(x!=y)
 {
  cout<<"false"<<endl;
 }
}