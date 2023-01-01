#include <iostream>
using namespace std;
void uams();
void header();
void welcome();
main()
{


 system("cls");
 header();
 welcome();
 uams();
 uams();
 uams();
 uams();
 uams();
}
void header()
{
 cout <<" *******************    "<<endl;
 cout <<" *                 *     "<<endl;
 cout <<" *   UET LAHORE    *   "<<endl;
 cout <<" *                 *   "<<endl;
 cout <<" *******************  "<<endl;
 cout <<"" <<endl;
 cout <<""<<endl;
 cout <<""<<endl;
}
void welcome()
{ 
 cout<<"           WELCOME TO UNIVERSITY ADMISSION SYSTEM       "<<endl;
}
void uams()
{


 int choice,matric1,inter1,ecat1,rollnumber1;
 float aggregate1,Ipercentage1,Mpercentage1,Epercentage1;
 int matric2,inter2,ecat2,rollnumber2;
 char key;
 float aggregate2,Ipercentage2,Mpercentage2,Epercentage2;
 string name1, name2;
 aggregate1 = 0;
 aggregate2 = 0;

 cout <<"Press 1 to enter details of first student."<<endl;
 cout <<"press 2 to calculate aggregate of first student."<<endl;
 cout <<"press 3 to enter details of second student."<<endl;
 cout <<"press 4 to calculate aggregate of second student."<<endl;
 cout <<"press 5 to display student with roll number."<<endl;
 cout <<"enter choice:";
 cin >> choice;

  Ipercentage1 = inter1*100/550;
  Mpercentage1 = matric1*100/1100;
  Epercentage1 = ecat1*100/400;
  aggregate1   = ( Mpercentage1*0.3) + (Ipercentage1*0.3) + (Epercentage1*0.40);

  Ipercentage2 = inter2*100/550;
  Mpercentage2 = matric2*100/1100;
  Epercentage2 = ecat2*100/400;
  aggregate2   = ( Mpercentage2 * 0.3) + (Ipercentage2*0.3) + (Epercentage2*0.40); 


 if(choice == 1)
 {
  cout<<"enter name:";
  cin >> name1;
  cout <<"matric marks / 1100:";
  cin>> matric1;
  cout <<"inter marks/ 550:";
  cin>> inter1;
  cout<<"ecat marks/400:";
  cin >> ecat1;
  cout<<"press any key to continue:";
  cin>>key;
 }
 if(choice == 2)
 {
  cout <<"total aggregate is:" <<aggregate1 <<endl;
  cout <<""<<endl;
  cout<<"press any key to continue:";
  cin>>key;
 }
 if(choice == 3)
 {
  cout<<"enter name:";
  cin >> name2;
  cout <<"matric marks / 1100:";
  cin>> matric2;
  cout <<"inter marks/ 550:";
  cin>> inter2;
  cout<<"ecat marks/400:";
  cin >> ecat2;
  cout<<"press any key to continue:";
  cin>>key;
 }
 if(choice == 4)
 {
  cout <<"total aggregate is:" <<aggregate2 <<endl;
  cout <<""<<endl;
  cout<<"press any key to continue:";
  cin>>key;
 } 
 if(choice == 5)
 {
  if(aggregate1 > aggregate2)
  {
   cout <<"first student has roll number 1";
  }
  if(aggregate2 > aggregate1)
  {
   cout <<" second student has roll number 1";
  }
 }
}





