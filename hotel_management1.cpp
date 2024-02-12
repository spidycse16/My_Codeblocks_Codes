#include<bits/stdc++.h>
#include<windows.h>
int room_no,r;
COORD coord = {0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

using namespace std;
class admin
{

public:
    int total_room=0;


    void admin_display();
    void add_room();

    // int check();


};

void admin ::admin_display()
{
    int i;
    gotoxy(49,4);
    for(i=0 ; i<30 ; i++)
        cout<<"_";
    gotoxy(49,6);
    for(i=0 ; i<30 ; i++)
        cout<<"_";
    for(i=5 ; i<25 ; i++)
    {
        gotoxy(48,i);
        cout<<"|";

    }
    gotoxy(49,24);
    for(int i=0 ; i<30 ; i++)
        cout<<"_";
    for(i=5 ; i<25 ; i++)
    {
        gotoxy(79,i);
        cout<<"|";

    }
    gotoxy(52,5);
    cout<<"ADMIN CONTROL!!";
    gotoxy(50,8);
    cout<<"1. Add Room";
    gotoxy(50,10);
    cout<<"2. Customer Record";



    gotoxy(49,26);

}
void admin ::add_room()
{
    int add;
    system("cls");
    fstream file;
    file.open("roomdetails.txt",ios::app);
    cout<<"enterr the num of room you want to add :";
    cin>>add;
    total_room+=add;
    file<<total_room;
    file.close();

}




class hotel_management : admin
{
    int choice;

    //admin......
    string username;
    string password;

public:



    void mainmeno();
    void admin_login();
    void add();
    int check(int r);


};
void hotel_management ::mainmeno()
{
    system("cls");
    int i;
    gotoxy(49,4);
    for(i=0 ; i<30 ; i++)
        cout<<"_";
    gotoxy(49,6);
    for(i=0 ; i<30 ; i++)
        cout<<"_";
    for(i=5 ; i<25 ; i++)
    {
        gotoxy(48,i);
        cout<<"|";

    }
    gotoxy(49,24);
    for(int i=0 ; i<30 ; i++)
        cout<<"_";
    for(i=5 ; i<25 ; i++)
    {
        gotoxy(79,i);
        cout<<"|";

    }
    gotoxy(50,5);
    cout<<"WELCOME TO HOTEL LOS SONTOSH!";
    gotoxy(50,8);
    cout<<"1. Admin Login";
    gotoxy(50,10);
    cout<<"2. Check Availability";
    gotoxy(50,12);
    cout<<"3. Book Room";
    gotoxy(50,14);
    cout<<"5. Services";
    gotoxy(50,16);
    cout<<"6. Information";
    gotoxy(50,18);
    cout<<"4. Exit";

    gotoxy(49,26);

    cin>>choice;
    switch(choice)
    {
    case 1:
    {
        admin_login();
        break;
    }
    case 2:
    {

    }
    case 3:
    {
        add();
        break;
    }
    }


}
void hotel_management ::admin_login()
{
A:
    system("cls");
    cout<<"********Hotel Los Santosh*********"<<endl<<endl;
    cout<<"enter username :";
    cin>>username;
    cout<<endl<<"enterr password :";
    cin>>password;
    if(username =="niloy"&&password=="1234")
    {
        cout<<"sucessfully log in"<<endl;
        system("cls");
        admin_display();

    }
    else
    {
        cout<<"invalid username or password"<<endl;
        cout<<"try again";
        getchar();
        goto A;
    }

}
int hotel_management::check(int r)
{
    int flag=0;
    ifstream fin("Record.dat",ios::in);
    while(!fin.eof())
    {
        fin.read((char*)this,sizeof(hotel_management));

        if(room_no==r)
        {
            flag=1;
            break;
        }
    }
    fin.close();
    return(flag);
}

void hotel_management::add()
{
    system("cls");
    string name,address,phone;

    int r,flag;
    ofstream fout("Record.dat",ios::app);
    cout<<"\n Enter Customer Detalis";
    cout<<"\n **********************";
    cout<<"\n\n Room no: ";
    cin>>r;
    flag=check(r);
    if(flag)
    {
        cout<<"\n Sorry..!!!Room is already booked";
        //system("pause");
    }

    else
    {
        room_no=r;

        cout<<" Name: ";

        cin>>name;

        cout<<" Address: ";

        cin>>address;

        cout<<" Phone No: ";

        cin>>phone;
        fout.write((char*)this,sizeof(hotel_management));
        cout<<"\nRoom is booked!!!";
    }
    //cout<<"\n Press any key to continue!!";
    //
    getchar();
    char a;
    fout.close();
    cout<<endl<<endl<<"Press M for main menu"<<endl;
    cin>>a;
    if(a=='M')
    mainmeno();
}


int main()
{
    hotel_management x;
    x.mainmeno();
}
