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
  printP(x,y); 
  if(x < 19)
  {
   x = x + 1;

  }
  if(x == 19)
  {
   gotoxy(x-1,y);
   cout<<" ";
   x = 3;
  }
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
 gotoxy(x-1,y);
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