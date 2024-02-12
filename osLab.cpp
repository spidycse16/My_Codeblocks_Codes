#include<bits/stdc++.h>
#include<unistd.h>
#define max 1024
using namespace std;

void usage()
{
    cout<<"usage\t./a out filename word"<<endl;
}
int main(int argc,char *argv[])
{
    FILE *fp;

    char fline[max];
    char *newline;

    int count=0;

    int occurrences=0;

    if(argc!=3)

    {

        usage();
        exit(1);
    }
    if(!(fp=fopen(argv[1],"r")))
    {
        printf("grep: couldn exit(1); open file: %s \n",argv[1]);
        exit(1);
    }

    while(fgets(fline,max,fp)!=NULL)
    {
        count++;

        if(newline=strchr(fline, '\n'))*newline='\0';

        if(strstr(fline,argv[2])!=NULL)
        {
            printf("%s %d %s \n", argv[1],count, fline);

            occurrences++;

        }

    }
}

