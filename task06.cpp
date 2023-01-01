#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printa();
void printW();
void printI();
void prints();
main()
{
 system("cls");
 int x = 0;
 int y = 12;
 gotoxy(x , y);
 printa();
 printW();
 printa();
 printI();
 prints();

}
void printa()
{
 cout<<"           #                 "<<endl;
 cout<<"          # #                   "<<endl;
 cout<<"         #   #                    "<<endl;
 cout<<"        #######                "<<endl;
 cout<<"       #       #                        "<<endl;
 cout<<"      #         #              "<<endl;
 cout<<"                               "<<endl;
}
void printW()
{

cout <<"      #        #          "<<endl;
cout <<"      #        #         "<<endl;
cout <<"      #    #   #            "<<endl;
cout <<"      #   # #  #               "<<endl;
cout <<"      #  #   # #               "<<endl;
cout <<"      #        #               "<<endl;
cout <<"                           "<<endl;
cout <<"                           "<<endl;
}
void prints()
{
 cout<<"       ########              "<<endl;
 cout<<"      #                 "<<endl;
 cout<<"     #                "<<endl;
 cout<<"       ########                 "<<endl;
cout<<"              #          "<<endl;
 cout<<"             #           "<<endl;
 cout<<"     ########                 "<<endl;
 cout<<"                           "<<endl;
}

void printI()
{
 cout <<"     ########              "<<endl;
 cout <<"        #            "<<endl;
 cout <<"        #            "<<endl;
 cout <<"        #             "<<endl;
 cout <<"        #            "<<endl;
 cout <<"     ########               "<<endl;
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x ;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
