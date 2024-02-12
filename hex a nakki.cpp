#include<dos.h>
#include<windows.h>
#include<iostream>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<time.h>
#include<fstream>
using namespace std;
static int mn=10;
int BALLS,innings=1,target;                                     //static variable
class Team1;
class Team2;
template<class x> void MyTeam(x o);
template<class z> void Score_board(z &t);
int extra_choice(string);
COORD coord= {0,0}; // this is global variable
void gotoxy(int x,int y)//change Cursor Location
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
class Live_Score
{
public :
    string match_name,venue,result,series_type,team1,team2,toss_choice,toss_winner,toss_loser;
    int n,total_overs,series_match_no,no_of_matches;
    int total_runs;
    virtual void update_score_board() {}                                    // virtual function
    void toss_decision();
    void display()
    {
        All_teams();
        limited_overs_series();
        toss();
        //instruction();
        //box();
        //toss_decision();
    }
    void box()
    {
        int i;
        gotoxy(49,4);
        for(i=0 ; i<30 ; i++)
        cout<<"_";
        gotoxy(49,6);
        for(i=0 ; i<30 ; i++)
        cout<<"_";
            for(i=5 ; i<15 ; i++)
            {
            gotoxy(48,i);
            cout<<"|";
            }
        gotoxy(49,14);
        for(i=0 ; i<30 ; i++)
        cout<<"_";
         for(i=5 ; i<15 ; i++)
            {
            gotoxy(79,i);
            cout<<"|";
            }
            gotoxy(49,30);
    }

    void limited_overs_series()
    {
        system("COLOR 0B");
        for(int x=49,y=4,i=0 ; i<30 ; i++)
        {
            gotoxy(x,y);
            cout<<"_";
            x++;
        }
        gotoxy(48,5);
        cout<<"|";
        gotoxy(79,5);
        cout<<"|";
        int i,j,x=49,y=6;
        for(i=0; i<30; i++)
        {
            gotoxy(x,y);
            cout<<"_";
            x++;
        }
        while(y<11)
        {
            y++;
            gotoxy(48,y);
            cout<<"|";

            gotoxy(79,y);
            cout<<"|";
        }
        x=49;
        for(i=0; i<30; i++)
        {
            gotoxy(x,y);
            cout<<"_";
            x++;
        }
        y=7;
        gotoxy(58,5);
        cout<<"Game Details";
        gotoxy(50,y++);
        cout<<"Venue  : ";
        gotoxy(50,y++);
        cout<<"Team 1 : ";
        gotoxy(50,y++);
        cout<<"Team 2 : ";
        gotoxy(50,y++);
        cout<<"OVER   : ";
        gotoxy(59,7);
        cin>>venue;
        gotoxy(59,8);
        cin>>team1;

        if(team1=="1")
        team1="Bangladesh";
         if(team1=="2")
        team1="India";
         if(team1=="3")
        team1="Pakistan";
         if(team1=="4")
        team1="England";
         if(team1=="5")
        team1="Australia";
         if(team1=="6")
        team1="New Zealand";
         if(team1=="7")
        team1="Southafrica";
        gotoxy(59,9);

        cin>>team2;
        if(team2=="1")
        team2="Bangladesh";
         if(team2=="2")
        team2="India";
         if(team2=="3")
        team2="Pakistan";
         if(team2=="4")
        team2="England";
         if(team2=="5")
        team2="Australia";
         if(team2=="6")
        team2="New Zealand";
         if(team2=="7")
        team2="Southafrica";
        gotoxy(59,10);
        cin>>total_overs;
        BALLS=(total_overs)*6;

        system("cls");
        //cout<<team1<<" "<<team2<<endl;
        //system("pause");
         fstream myfile;
         string line;
         if(team1=="Bangladesh")
         {
             myfile.open("Bangladesh.txt");
             while(getline(myfile,line))
             {
                 cout<<line<<endl;
             }
                 system("pause");

         }

    }
    int All_teams()
    {
        system("cls");
        int i;
        gotoxy(49,13);
        for(i=0 ; i<30 ; i++)
        cout<<"_";
        gotoxy(48,15);
        for(i=0 ; i<30 ; i++)
        cout<<"_";
            for(i=14 ; i<26 ; i++)
            {
            gotoxy(48,i);
            cout<<"|";
            }
        gotoxy(49,25);
        for(i=0 ; i<30 ; i++)
        cout<<"_";
         for(i=14 ; i<26 ; i++)
            {
            gotoxy(79,i);
            cout<<"|";
            }
            gotoxy(57,14);
            cout<<"Team Information";
            gotoxy(50,16);
            cout<<"1.Bangladesh";
            gotoxy(50,17);
            cout<<"2.India";
            gotoxy(50,18);
            cout<<"3.Pakistan";
            gotoxy(50,19);
            cout<<"4.England";
            gotoxy(50,20);
            cout<<"5.Australia";
            gotoxy(50,21);
            cout<<"6.New Zealand";
            gotoxy(50,22);
            cout<<"7.South Africa";
            gotoxy(49,30);
    }

    void toss()
    {
        system("cls");
        string ch;
        int c;
        gotoxy(49,5);
        cout<<"Its toss time...";
        getchar();
        gotoxy(49,6);
        cout<<"Its "<<team1<< "call";
        gotoxy(49,6);
        cout<<"H for Head and T for Tail";
        gotoxy(49,7);
        for(int i=0 ; ; i++)
        {
            cin>>ch;
            system("cls");
            if(ch=="H" || ch=="T")
                break;
            else
            {
                gotoxy(49,6);
                cout<<"Invalid Choice";

                gotoxy(49,7);
                cout<<"Please Enter H or T";
                gotoxy(49,8);
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
        getchar();
        cin>>toss_choice;
        system("cls");
        if(toss_choice=="bat"||toss_choice=="BAT"||toss_choice=="ball"||toss_choice=="BALL")
        {
            gotoxy(49,6);
            cout<<toss_winner<<" won the toss and decided to "<<toss_choice<<" first";
            // cout<<team1;
            cout<<endl;
            gotoxy(49,7);
            system("pause");
        }
        gotoxy(40,40);
    }

};
int main()
{
    Live_Score a;
    a.display();
}
