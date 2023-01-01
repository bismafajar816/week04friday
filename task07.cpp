#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void printP(int x, int y);
void gotoxy(int ,int );
main()
{
 system("cls");
 int x = 3;
 int y = 3;
 printmaze();
 while(true)
 {
  gotoxy(3,3);
  cout<<" ";
  gotoxy(3,2);
  printP(3,2);
  gotoxy(3,2);
  cout<<" ";
  gotoxy(3,4);
  printP(3,4);
  gotoxy(3,4);
  cout<<" ";
  gotoxy(3,1);
  printP(3,1);
  gotoxy(3,1);
  cout<<" "; 
  gotoxy(3,5);
  printP(3,5);
  gotoxy(3,5);
  cout <<" "; 
   
 }
}
void printmaze()
{
 
 cout <<"*****************************" <<endl;
 cout <<"*                           *" <<endl;
 cout <<"*                           *" <<endl;
 cout <<"*                           *"<<endl;
 cout <<"*                           *"<<endl;
 cout <<"*                           *"<<endl; 
 cout <<"*                           *" <<endl;
 cout <<"*                           *" <<endl;
 cout <<"*****************************" <<endl;

}
void printP(int x, int y)
{ 
 gotoxy(x+1,y);
 cout<<" ";
 gotoxy(x,y);
 cout<<"P";
 Sleep(400);
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y= y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}