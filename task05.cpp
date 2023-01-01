#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printS();
void printB();
void printM();
void printI();
void printA();

main()
{
 system("cls");
 int x = 21;
 int y = 12;
 gotoxy(x , y);
 printB();
 printI();
 printS();
 printM();
 printA();

}

void printB()
{
   cout <<"   #           ##########       ############       #                   #           #          "<<endl;
gotoxy(21,13);
   cout <<"   #                #         #                    #   #          #    #          #    #        "                         <<endl;
gotoxy(20,14);
   cout <<"    #                #         #                    #      #     #      #        #        #               "<<endl;
gotoxy(20,15);
 cout <<"    #########        #           #############      #          #        #      ############       "<<endl;
gotoxy(20,16);
 cout <<"    #       #        #                      #       #                   #     #            #            "<<endl;
gotoxy(20,17);
 cout <<"    #       #        #                     #        #                   #    #              #                "<<endl;
gotoxy(20,18);
 cout <<"    #########    ##########     ###########         #                   #   #                #      "<<endl;
}
void printI()
{
gotoxy(20,19);
 cout <<"     ########              "<<endl;
gotoxy(20,20);
 cout <<"        #            "<<endl;
gotoxy(20,21);
 cout <<"        #            "<<endl;
gotoxy(20,22);
 cout <<"        #             "<<endl;
gotoxy(20,23);
 cout <<"        #            "<<endl;
gotoxy(20,24);
 cout <<"     ########               "<<endl;
}
void printS()
{
gotoxy(20,25);
 cout<<"       ########              "<<endl;
gotoxy(20,26);
 cout<<"      #                 "<<endl;
gotoxy(20,27);
 cout<<"     #                "<<endl;
gotoxy(20,28);
 cout<<"       ########                 "<<endl;
gotoxy(20,29);
cout<<"              #          "<<endl;
gotoxy(20,30);
 cout<<"             #           "<<endl;
gotoxy(20,31);
 cout<<"     ########                 "<<endl;
 cout<<"                           "<<endl;
}
void printM()
{
gotoxy(20,32);
 cout<<"  #          #        "<<endl;
gotoxy(20,33);
 cout<<"  # #      # #           "<<endl;
gotoxy(20,34);
 cout<<"  #   #   #  #             "<<endl;
gotoxy(20,35);
 cout<<"  #     #    #           "<<endl;
gotoxy(20,36);
 cout<<"  #          #         "<<endl;
gotoxy(20,37);
 cout<<"  #          #         "<<endl;
gotoxy(20,38);
 cout<<"  #          #         "<<endl;
}
void printA()
{
gotoxy(20,39);
  cout<<"           #                 "<<endl;
gotoxy(20,39);
 cout<<"          # #                   "<<endl;
gotoxy(20,40);
 cout<<"         #   #                    "<<endl;
gotoxy(20,41);
 cout<<"        #######                "<<endl;
gotoxy(20,42);
 cout<<"       #       #                        "<<endl;
gotoxy(20,43);
 cout<<"      #         #              "<<endl;
gotoxy(20,44);
 cout<<"                               "<<endl;
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x ;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
