#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void printp(int x, int y);
void gotoxy(int  , int );
main()
{
 system("cls");   
 maze();
 while(true)
{
 int x = 29;
 int y = 3;
 printp(x,y); 
 gotoxy(29,3);
 cout<<" ";
 gotoxy(29,4);
 printp(29,4);
 gotoxy(29,4);
 cout<<" ";
 gotoxy(29,5);
 printp(29,5);
 gotoxy(29,5);
 cout<<" ";
 gotoxy(29,6);
 printp(29,6);
 gotoxy(29,6);
 cout<<" ";
 gotoxy(29,7);
 printp(29,7);
 gotoxy(29,7);
 cout<<" ";
 gotoxy(29,8);
 printp(29,8);
 gotoxy(29,8);
 cout<<" ";
 gotoxy(29,9);
 printp(29,9);
 gotoxy(29,9);
 cout<<" ";
 gotoxy(29,10);
 printp(29,10);
 gotoxy(29,10);
 cout<<" ";
 gotoxy(29,11);
 printp(29,11);
 gotoxy(29,11);
 cout<<" ";
 gotoxy(29,12);
 printp(29,12);
 gotoxy(29,12);
 cout<<" ";
 gotoxy(29,13);
 printp(29,13);
 gotoxy(29,13);
 cout<<" ";
 gotoxy(31,13);
 printp(31,13);
 gotoxy(31,13);
 cout<<" ";
 gotoxy(31,12);
 printp(31,12);
 gotoxy(31,12);
 cout<<" ";
 gotoxy(29,12);
 printp(29,12);
 gotoxy(29,12);
 cout<<" ";
 gotoxy(30,12);
 printp(30,12);
 gotoxy(30,12);
 cout<<" ";
 gotoxy(29,12);
 printp(29,12);
 gotoxy(29,12);
 cout<<" ";

 }
}
void maze()
{
cout <<"################################################################################           " <<endl;
cout <<"||.. .............................................................  ........  ||        " <<endl;
cout <<"||.. %%%%%%%%%%%%%%%                     %%%%%%%%%%%%%%%%    |%|..    %%%%    ||     " <<endl;
cout <<"||..             |%|              ...    |%|          |%|    |%|..     |%|    ||        " <<endl;
cout <<"||..             |%|           |%|...    |%|          |%|    |%|..     |%|    || " <<endl;
cout <<"||..      %%%%%%%%%%           |%|...    %%%%%%%%%%%%%%%%       ..    %%%%.   || " <<endl;
cout <<"||..      |%|                  |%|...   ................. |%|   ..            ||  " <<endl;
cout <<"||..      %%%%%%%%%%%%%%%%%%   |%|...   %%%%%%%%%%%       |%|   ..    %%%%.   ||        " <<endl;
cout <<"||..                     |%|   |%|...   |%|......         |%|   ..     |%|.   ||      " <<endl;
cout <<"||..        ............ |%|        P   |%|...... |%|           ..     |%|.   ||       " <<endl;
cout <<"||.. |%|    |%|      |%|.|%|  |%|          ...... |%|           ..|%|  |%|.   ||          " <<endl;
cout <<"||.. |%|    |%|      |%|..    %%%%%%%%     ...... |%|            .|%|.        ||   " <<endl;
cout <<"||.. |%|    |%|      |%|.. G     ...|%|      %%%%%%%%           . |%|.        ||  " <<endl;
cout <<"||.. |%|                .        ...|%|                     |%| ..|%|.        ||   " <<endl;
cout <<"||.. |%|    %%%%%%%%%%%%%%%%%    ...|%|%%%%%%%%%%%%%        |%| ..|%|%%%%%%   ||  " <<endl;
cout <<"||.. .................................................      |%| ...........   || " <<endl;
cout <<"||    ................................................              .......   || " <<endl;
cout <<"||.. |%|  |%|    |%|..      %%%%%%%%%%%%%%%  .....|%|       |%|  ..|%|.       ||                     " <<endl;
cout <<"||.. |%|  |%|    |%|..               ...|%|    %%%%%%       |%|  ..|%|.       ||     " <<endl;
cout <<"||.. |%|             .               ...|%|                 |%|  ..|%|.       ||       " <<endl;
cout <<"||.. |%|  %%%%%%%%%%%%%%%            ...|%|                 |%|  ..|%|%%%%%   ||  " <<endl;
cout <<"||....................................................      |%|  ..........   ||     " <<endl;
cout <<"||..  ................................................               ......   ||  " <<endl;
cout <<"################################################################################  " <<endl;
}
void printp(int x, int y)
{
 gotoxy(x-1,y);
 cout<<" ";
 gotoxy(x,y);
 cout <<"p";
 Sleep(400);
}
void gotoxy(int x , int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y= y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}