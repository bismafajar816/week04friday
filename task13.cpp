#include <iostream>
using namespace std;
void tomcat();
main()
{
 tomcat();
}
void tomcat()
{
 int workingdays;
 int holidays;
 int time;
 int difference;
 int differenceQ;
 int differenceR;
 cout<<"enter holidays:";
 cin>> holidays;
 workingdays = 365 - holidays;
 time = workingdays*63 + holidays*127;
 difference = 30000 - time;
 differenceQ = difference / 60;
 differenceR = difference % 60;
 cout <<"time for play in minutes is: "<<time<<endl;
 if(difference >= 0)
 {

  cout<<"tom sleeps well"<<endl;
  cout<<differenceQ<<"hour"<<differenceR<<" minutes less for play"<<endl;
 
 }
 if(difference < 0) 
 {
  difference = time - 30000;
  cout <<"tom will run away"<<endl;
  cout <<differenceQ <<"hour and"<<differenceR<<"minutes for play."<<endl;
 }
}