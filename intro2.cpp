#include<dos.h>
#include<windows.h>
#include<iostream>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<time.h>
using namespace std;
static int mn=10;
int BALLS,innings=1,target,total_overs;                                     //static variable
class Team1;
class Team2;
string ch,toss_winner,toss_loser,toss_choice;
template<class x> void MyTeam(x o);
string venue,team1,team2;
template<class z> void Score_board(z &t);
int extra_choice(string);
COORD coord= {0,0}; // this is global variable
void gotoxy(int x,int y)//change Cursor Location
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void toss()
  {
      int c;
     gotoxy(49,5);
     cout<<"Its toss time...";
     getchar();
     system("cls");
     gotoxy(49,6);
     cout<<"Its "<<team1<< "call";
     gotoxy(49,6);
     cout<<"H for Head and T for Tail";
     gotoxy(49,7);
     for(int i=0 ; ; i++)
     {
     cin>>ch;
      if(ch=="H" || ch=="T")
            break;
      else
      {
        gotoxy(49,6);
      cout<<"Invalid Choice";

          gotoxy(49,7);
      cout<<"Please Enter H or T";
      }
     }
     c=(rand());
     if(ch=="H" || ch=="h")
     {
         if(c%2==0)
         {
             toss_winner=team1;
             toss_loser=team2;
         }
         else
         {
             toss_winner=team2;
             toss_loser=team1;
         }
     }
     if(ch=="T" || ch=="t")
     {
         if(c%2==0)
         {
             toss_winner=team1;
             toss_loser=team2;
         }
         else
         {
             toss_winner=team2;
             toss_loser=team1;
         }
     }
     gotoxy(49,6);
      cout<<"Toss won by "<<toss_winner;
                 gotoxy(49,7);
                 cout<<"What do you want to do??";
                gotoxy(49,8);
                cout<<"[ball/bat]";
                gotoxy(49,9);
                cin>>toss_choice;
                getchar();
                system("cls");
                if(toss_choice=="bat"||toss_choice=="BAT"||toss_choice=="ball"||toss_choice=="BALL")
                {
                    gotoxy(49,6);
                    cout<<toss_winner<<" won the toss and decided to "<<toss_choice<<" first";
                }
  }
int main()
{
  toss();
}

