#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x=15, int y=15);
main()
{
 system("cls");
 cout <<"test";
 gotoxy(15,15);
 cout<<"this is bisma.";
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = 15;
 coordinates.Y= 15;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}