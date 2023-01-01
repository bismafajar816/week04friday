#include <iostream>
using namespace std;
void speed();
main()
{ 
 int perhour;
 cout <<"enter speed:";
 cin>> perhour;
 speed();
}
void speed()
{
 int perhour;
 if( perhour >= 100)
 {
  cout<<"STOP!! YOU ARE OVERSPEEDING.";
 }
 if( perhour < 100)
 {
  cout<<"KEEP MOVING !! YOU ARE PERFECT.";
 }
}