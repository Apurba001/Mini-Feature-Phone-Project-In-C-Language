#include<stdio.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include <unistd.h>
#include <windows.h>
void timedate()
{
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    printf("\n\n\n");
    printf("\tSIM 1 || SIM 2\t\t\t\t\t\t\t\t%s", asctime(tm));
    printf("    -------------------------------------------------------------------------------------------------------\n\n");
    return;
}
void home()
{
    printf("                                                 Welcome To\n\n");
    printf("                                                   NOKIA\n\n\n\n");
    printf("                                                 Teletalk 3G\n");
    printf("                                                Grameenphone\n\n\n\n");
    printf("   ------------                                                                             ----------------\n");
    printf("   | 1.Menu   |                                                                             | 2.Power Off  |\n");
    printf("   ------------                                                                             ----------------\n\n\n\n");
    return;
}
void mainmanue()
{

    printf("\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t|     4. CALENDER       |\n");
    printf("\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t|     5. CALCULATOR     |\n");
    printf("\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t|     6. STOPWATCH      |\n");
    printf("\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t|     7.   GAME         |\n");
    printf("\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t|     8.   PHONEBOOK    |\n");
    printf("\t\t\t\t\t-------------------------\n\n");
    printf("   ------------                                -------------                               ----------------\n");
    printf("   | 1.Menu   |                                |  3.Home   |                               | 2.Power Off  |\n");
    printf("   ------------                                -------------                               ----------------\n\n\n");


    return;
}
void poweroff()
{
    printf("\t\t\t\tThank you sir for being with us and\n\t\t\t\t  choosing NOKIA as your phone.\n\n\n\n");
    printf("\t\t\t\t\t****************\n");
    printf("\t\t\t\t\t* SUTTING DOWN *\n");
    printf("\t\t\t\t\t****************\n\n\n\n");
    return;
}
void calanderfunction()
{
    char *month[]= {"Janury","Februry","March","April","May","June","July","August","september","october","November","December"};
    int monthday[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,tdays,wday=0,space=0,y;
    printf("\n\n\t\tEnter Your Favourite Year : ");
    scanf("%d",&y);
    printf("\n\n\t\t*************************  Welcome To %d  ************************\n",y);
    if((y%4==0&&y%100!=0)||y%400==0)
    {
        monthday[1]=29;
    }
    //First Day of The Year
    int day=(y*365+((y-1)/4)-((y-1)/100)+((y-1)/400))%7;
    wday=day;
    for(i=0; i<12; i++)
    {
        printf("\n\n\n\t\t---------------------------  %s  ------------------------------\n",month[i]);
        printf("\n\t\t      SUN     MON     TUE     WED     THU     FRI     SAT\n\n");
        for(space=1; space<=wday; space++)
        {
            printf("        ");
        }
        tdays=monthday[i];
        printf("\t\t");
        for(j=1; j<=tdays; j++)
        {

            printf("%8d",j);
            wday++;
            if(wday>6)
            {
                wday=0;
                printf("\n");
                printf("\t\t");
            }
        }

    }
    printf("\n\n");

}
void stopwatchfunctuion()
{
    int h=0, m=0, s=0,h1,m1,s1;

    int D = 1000;

    printf("\t\t\t\tSet time  :  ");

    scanf("%d %d %d", &h1, &m1, &s1);
    if (h > 12)
    {
        printf("ERROR!\n");
        exit(0);
    }

    if (m > 60)
    {
        printf("ERROR!\n");
        exit(0);
    }

    if (s > 60)
    {
        printf("ERROR!\n");
        exit(0);
    }

    while (1)
    {

        s += 1;

        if (s > 59)
        {
            m += 1;
            s = 0;
        }

        if (m > 59)
        {
            h += 1;
            m = 0;
        }

        if (h > 12)
        {
            h = 1;
            m = 0;
            s = 0;
        }
        timedate();
        printf("\t\t\t\t\t       Set Up Time\n\n");
        printf("\t\t\t\t\t        %d  %d  %d\n\n", h1, m1, s1);
        printf("\n\t\t\t\t\t     START STOPWATCH\n\n");

        printf("\n\t\t\t\t\t      %02d : %02d : %02d\n\n", h, m, s);
        if(h==h1&&m==m1&&s==s1)
        {
            break;
        }

        Sleep(D);

        system("cls");
    }

}
void calculatorfunctuion()
{
    char operator,ch;
    double first, second;
    printf("\t\t\t\tEnter an operator (+, -, *,/): ");
    scanf("%c %c",&ch,&operator);
    printf("\n\n\t\t\t\tEnter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator)
    {
    case '+':
        printf("\n\n\t\t\t\tAddition : %.1lf + %.1lf = %.1lf\n\n", first, second, first + second);
        break;
    case '-':
        printf("\n\n\t\t\t\tSubtraction : %.1lf - %.1lf = %.1lf\n\n", first, second, first - second);
        break;
    case '*':
        printf("\n\n\t\t\t\tMultiplication : %.1lf * %.1lf = %.1lf\n\n", first, second, first * second);
        break;
    case '/':
        printf("\n\t\t\t\tDivision : %.1lf / %.1lf = %.1lf\n\n", first, second, first / second);
        break;
    default:
        printf("Error! operator is not correct");
    }
}
void add_contact()
{
    FILE *fp;
    fp=fopen("contact.txt","a+");
    system("cls");
    timedate();
    printf("\t\t\t\t\t*****ADD CONTACT*****\n\n\n");
    printf("\n\t\t\t\tName    :-");
    char name[20];
    scanf("%s",name);
    printf("\n\t\t\t\tMob No. :-" );
    char mob[20];
    scanf("%s",mob);
    fprintf(fp,"%s %s\n",name,mob);
    fclose(fp);
    printf("\n\n\n\n");

}
void search_contact()
{
    FILE *fp;
    fp=fopen("contact.txt","r");
    system("cls");
    timedate();
    printf("\t\t\t\t\t*****SEARCH CONTACT*****\n\n\n");
    printf("\n\t\t Enter Name :-");
    char name[20];
    scanf("%s",name);
    char name1[20],mob[20];
    while(fscanf(fp,"%s %s",name1,mob)!=EOF)
    {
        if(strcmp(name,name1)==0)
        {
            printf("\n\t\t\t\t\tNAME     :- %s\n",name1);
            printf("\n\t\t\t\t\tMOB NO.  :- %s\n",mob);
        }
    }
    fclose(fp);
    printf("\n\n\n\n");

}
void delete_contact()
{
    FILE *fp,*fp1;
    fp=fopen("contact.txt","r+");
    fp1=fopen("temp.txt","w");
    system("cls");
    timedate();
    printf("\t\t\t\t\t*****DELETE CONTACT*****\n\n\n");
    printf("\n\t\t\t\t\t Enter Name :-");
    char name[20];
    scanf("%s",name);
    char name1[20],mob[20];
    while(fscanf(fp,"%s %s",name1,mob)!=EOF)
    {
        if(strcmp(name,name1)==0)
        {
            continue;
        }
        fprintf(fp1,"%s %s\n",name1,mob);
    }
    fclose(fp);
    fclose(fp1);
    fp=fopen("contact.txt","w");
    fp1=fopen("temp.txt","r");
    while(fscanf(fp1,"%s %s",name1,mob)!=EOF)
    {

        fprintf(fp,"%s %s\n",name1,mob);
    }
    fclose(fp);
    fclose(fp1);
    remove("temp.txt");
    printf("\n\n\n\n");

}
void view_all_contact()
{

    FILE *fp;
    fp=fopen("contact.txt","r");
    system("cls");
    timedate();
    printf("\t\t\t\t\t*****ALL CONTACTS*****\n\n\n");
    char name1[20],mob[20];
    while(fscanf(fp,"%s %s",name1,mob)!=EOF)
    {
        printf("\n\t\t\t\t\t NAME    :-  %s",name1);
        printf("\n\t\t\t\t\t MOB NO. :-  %s",mob);
    }
    fclose(fp);
    printf("\n\n\n\n");

}
void phonebook()
{
    system("cls");
    timedate();
    printf("\t\t\t\t       *****    PHONE BOOK     *****\n\n\n");
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t|       1. Add Contact     |\n");
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t|      2. Search Contact   |\n");
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t|      3. Delete Contact   |\n");
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t|     4. View All Contact  |\n");
    printf("\t\t\t\t\t----------------------------\n\n\n");

    printf("Enter Your Choice:-");
    int option;
    scanf("%d",&option);
    if(option==1)
    {

        add_contact();
    }
    else if(option==2)
    {
        search_contact();
    }
    else if(option==3)
    {
        delete_contact();
    }
    else if(option==4)
    {

        view_all_contact();
    }


}
void show_record()
{
    timedate();
    char name[20];
    float scr=0;
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&name,&scr);
    printf("\n\n\t\t*************************************************************");
    printf("\n\n\t\t %s has secured the Highest Score %f",name,scr);
    printf("\n\n\t\t*************************************************************");
    fclose(f);
    getch();
}

void edit_score(float score, char playernm[20])
{
    system("cls");
    float sc;
    char nm[20];
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&nm,&sc);
    if (score>=sc)
    {
        sc=score;
        fclose(f);
        f=fopen("score.txt","w");
        fprintf(f,"%s\n%.2f",playernm,sc); //print in player name
        fclose(f);
    }
}
int main()
{
    printf(" \n\n");

    printf("                          N N      N N     OOOOOO     KK     KK    IIIIIIII        AA                           \n");
    printf("                          N N N    N N    OO    OO    KK   KK         II         AA  AA                          \n");
    printf("                          N N   N  N N    OO    OO    KK KK           II        AA    AA                         \n");
    printf("                          N N    N N N    OO    OO    KK   KK         II       AA ==== AA                         \n");
    printf("                          N N      N N     0O0O0O     KK     KK    IIIIIIII   AA        AA                        \n");
    printf(" \n\n");
    printf("                                           Enter User Name:");
    char str[100];
    gets(str);
    system("cls");
    timedate();
    printf("                                                 Welcome To\n\n");
    printf("                                                   NOKIA\n\n");
    printf("\t\t\t\t\t\t%s\n\n\n",str);
    printf("                                                 Teletalk 3G\n");
    printf("                                                Grameenphone\n\n\n\n");
    printf("   ------------                                                                             ----------------\n");
    printf("   | 1.Menu   |                                                                             | 2.Power Off  |\n");
    printf("   ------------                                                                             ----------------\n\n\n\n");
    printf("Press Switch : ");
    int a1;
    scanf("%d",&a1);
    system("cls");
    if(a1==2)
    {
        timedate();
        poweroff();
        return 0;
    }
    else
    {
        timedate();
        mainmanue();
        while(1)
        {
            printf("Press Switch : ");
            int a2;
            scanf("%d",&a2);
            system("cls");
            if(a2==2)
            {
                timedate();
                poweroff();
                return 0;
            }
            else if(a2==1)
            {
                timedate();
                mainmanue();
            }
            else if(a2==3)
            {
                timedate();
                home();
            }
            else if(a2==4)
            {
                timedate();
                printf("\t\t\t\t\t     Welcome to The\n\n\t\t\t\t\t       Calender\n\n\n\n");
                printf("\t\t\t\t\tPress Continue switch to\n\t\t\t\t\t    input  year and \n\t\t\t\t\tsee this year's calender\n\n\n\n");
                printf("   ---------------                                                                             ----------------\n");
                printf("   | 1.Continue  |                                                                             |    2.Back    |\n");
                printf("   ---------------                                                                             ----------------\n\n\n\n");
                while(1)
                {
                    printf("Press Switch : ");
                    int calander;
                    scanf("%d",&calander);
                    system("cls");
                    if(calander==1)
                    {
                        timedate();
                        calanderfunction();
                        printf("   ---------------                                                                             ----------------\n");
                        printf("   | 1.Continue  |                                                                             |    2.Back    |\n");
                        printf("   ---------------                                                                             ----------------\n\n\n\n");
                    }
                    else if(calander==2)
                    {
                        timedate();
                        mainmanue();
                        break;
                    }
                }
            }
            else if(a2==5)
            {
                timedate();
                printf("\t\t\t\t\t     Welcome to The\n\n\t\t\t\t\t       Calculator\n\n\n\n");
                printf("\t\t\t\t\tPress Continue switch to\n\t\t\t\t\t\tTo Start \n\t\t\t\t\t\tCalculator \n\n\n\n");
                printf("   ---------------                                                                             ----------------\n");
                printf("   | 1.Continue  |                                                                             |    2.Back    |\n");
                printf("   ---------------                                                                             ----------------\n\n\n\n");

                while(1)
                {
                    printf("Press Switch : ");
                    int calculator;
                    scanf("%d",&calculator);
                    system("cls");
                    if(calculator==1)
                    {
                        timedate();
                        calculatorfunctuion();
                        printf("   ---------------                                                                             ----------------\n");
                        printf("   | 1.Continue  |                                                                             |    2.Back    |\n");
                        printf("   ---------------                                                                             ----------------\n\n\n\n");
                    }
                    else if(calculator==2)
                    {
                        timedate();
                        mainmanue();
                        break;


                    }

                }
            }
            else if(a2==6)
            {

                timedate();
                printf("\t\t\t\t\t     Welcome to The\n\n\t\t\t\t\t       Stopwatch\n\n\n\n");
                printf("\t\t\t\t\tPress Continue switch to\n\t\t\t\t\t\tTo Start \n\t\t\t\t\t\tStopwatch \n\n\n\n");
                printf("   ---------------                                                                             ----------------\n");
                printf("   | 1.Continue  |                                                                             |    2.Back    |\n");
                printf("   ---------------                                                                             ----------------\n\n\n\n");

                while(1)
                {
                    printf("Press Switch : ");
                    int stopwatch;
                    scanf("%d",&stopwatch);
                    system("cls");
                    if(stopwatch==1)
                    {
                        timedate();
                        stopwatchfunctuion();
                        printf("   ---------------                                                                             ----------------\n");
                        printf("   | 1.Continue  |                                                                             |    2.Back    |\n");
                        printf("   ---------------                                                                             ----------------\n\n\n\n");
                    }
                    else if(stopwatch==2)
                    {
                        timedate();
                        mainmanue();
                        break;


                    }

                }
            }
            else if(a2==7)
            {
                timedate();
                int countr=0,r,r1,count=0,i,n;
                float score;
                char choice;
                char playername[20];
mainhome:
                printf("\t\t\t\t\t  << QUIZ GAME >>\n");
                printf("\n\t\t\t\t****************************************");

                printf("\n\t\t\t\t\t      WELCOME\n ");
                printf("\n\t\t\t\t\t        to\n ");
                printf("\n\t\t\t\t\t    THE QUIZ GAME ");
                printf("\n\t\t\t\t****************************************");
                printf("\n\t\t\t\t > Press S to start the game");
                printf("\n\t\t\t\t > Press V to view the highest score  ");
                printf("\n\t\t\t\t > press Q to quit             ");
                printf("\n\t\t\t\t________________________________________\n\n");
                choice=toupper(getch());

                if(choice=='V')
                {
                    system("cls");
                    show_record();
                    system("cls");
                    goto mainhome;
                }
                else if (choice=='Q')

                {
                    system("cls");
                    timedate();
                    mainmanue();

                }

                else if(choice=='S')
                {

                    system("cls");
                    timedate();
                    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
                    gets(playername);
                    system("cls");
                    timedate();
                    printf("\n\t\t\t *********** Welcome %s to C Program Quiz Game *****************",playername);
                    printf("\n\t\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
                    printf("\n\t\t\t    right option.");
                    printf("\n\t\t\t >> You will be asked questions continuously, till right answers are given");
                    printf("\n\t\t\t >> No negative marking for wrong answers!");
                    printf("\n\n\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
                    printf("\n\n\n\t\t\t Press Y  to start the game!\n");
                    printf("\n\t\t\t Press any other key to return to the main menu!");
                    if (toupper(getch())=='Y')
                    {
                        system("cls");
                        goto home;
                    }

                    else
                    {
                        system("cls");
                        goto mainhome;
                    }
home:
                    system("cls");
                    int countr=0;
                    for(i=1; i<=10; i++)
                    {
                        system("cls");
                        r=i;

                        switch(r)
                        {
                        case 1:
                            timedate();
                            printf("\n\n\n\n\t\t\t\tAll are the example of input devices Except a:");
                            printf("\n\n\t\t\t\t\tA.Scanner\t\tB.Mouse\n\n\t\t\t\t\tC.Printer\t\tD.Keyboard");
                            if (toupper(getch())=='C')
                            {
                                printf("\n\n\t\t\t\t\tCorrect!!!");
                                countr++;
                                getch();
                                break;
                                getch();
                            }


                            else
                            {
                                printf("\n\n\t\t\t\t\tWrong!!! The correct answer is C.Printer");
                                getch();
                                goto score;
                                break;
                            }


                        case 2:
                            timedate();
                            printf("\n\n\n\t\t\t\t\tWhat kind of file extension .mpg?,");
                            printf("\n\n\t\t\t\t\tA.Movie file \t\tB.Text file\n\n\t\t\t\t\tC.Image file\t\tD.Audio file");
                            if (toupper(getch())=='A')
                            {
                                printf("\n\n\t\t\t\t\tCorrect!!!");
                                countr++;
                                getch();
                                break;
                            }


                            else
                            {
                                printf("\n\n\t\t\t\t\tWrong!!! The correct answer is A.Movie file");
                                getch();
                                goto score;
                                break;
                            }

                        case 3:
                            timedate();
                            printf("\n\n\n\t\t\t\t\tA DVD is an example of a/an.. ");
                            printf("\n\n\t\t\t\t\tA.Magnetic disk\t\tB.Hard disk\n\n\t\t\t\t\tC.Output device\t\tD.Optical disk");
                            if (toupper(getch())=='D')
                            {
                                printf("\n\n\t\t\t\t\tCorrect!!!");
                                countr++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\n\t\t\t\t\tWrong!!! The correct answer is D.Optical disk");
                                getch();
                                goto score;
                                break;
                            }

                        case 4:
                            timedate();
                            printf("\n\n\n\t\t\t\t\tWho is he founder of facebook?");
                            printf("\n\n\t\t\t\t\tA.Mark zuckerburg\tB.Tesla\n\n\t\t\t\t\tC.Steve jobs\t\tD.Bill gates");
                            if (toupper(getch())=='A')
                            {
                                printf("\n\n\t\t\t\t\tCorrect!!!");
                                countr++;
                                getch();
                                break;
                            }

                            else
                            {
                                printf("\n\n\t\t\t\t\tWrong!!! The correct answer is A.Mark zuckerburg");
                                getch();
                                goto score;
                                break;
                            }


                        case 5:
                            timedate();
                            printf("\n\n\n\t\t\t\t\tWhich of he following is a web browser?");
                            printf("\n\n\t\t\t\t\tA.Dreamweaver\tB.Netscape navigator\n\n\t\t\t\t\tC.Maya\t\tD.Flash");
                            if(toupper(getch())=='B')
                            {
                                printf("\n\n\t\t\t\t\tCorrect!!!");
                                countr++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\n\t\t\t\t\tWrong!!! The correct answer is B.Netscape navigator");
                                getch();
                                goto score;
                                break;
                            }

                        case 6:
                            timedate();
                            printf("\n\n\n\t\t\t\t\tWhat kind of file extension .bak?,");
                            printf("\n\n\t\t\t\t\tA.Backup file \t\tB.Text file\n\n\t\t\t\t\tC.Image file\t\tD.Audio file");
                            if (toupper(getch())=='A')
                            {
                                printf("\n\n\t\t\t\t\tCorrect!!!");
                                countr++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\n\t\t\t\t\tWrong!!! The correct answer is A.Backup file");
                                getch();
                                goto score;
                                break;
                            }

                        case 7:
                            timedate();
                            printf("\n\n\n\t\t\t\twhich of he following is a read only memory storage device ");
                            printf("\n\n\t\t\t\t\tA.Flash drive\t\tB.Hard disk\n\n\t\t\t\t\tC.Floppy disk\t\tD.CDROM");
                            if(toupper(getch())=='D')
                            {
                                printf("\n\n\t\t\t\t\tCorrect!!!");
                                countr++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\n\t\t\t\t\tWrong!!! The correct answer is D.CDROM");
                                getch();
                                goto score;
                                break;
                            }
                        case 8:
                            timedate();
                            printf("\n\n\n\t\t\tThe _____ shows all the web sites any pages that you have visited one of recent time ");
                            printf("\n\n\t\t\t\t\tA.Hisory list\t\tB.Status bar \n\n\t\t\t\t\tC.task bar\t\tD.record");
                            if(toupper(getch())=='A')
                            {
                                printf("\n\n\t\t\t\t\tCorrect!!!");
                                countr++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\n\t\t\t\t\tWrong!!! The correct answer is A.Hisory list");
                                getch();
                                goto score;
                                break;
                            }
                        case 9:
                            timedate();
                            printf("\n\n\n\t\t\t\tA 32 bit word computer can access ____ bytes at a time ");
                            printf("\n\n\t\t\t\t\tA.32\t\tB.16\n\n\t\t\t\t\tC.8\t\tD.4");
                            if(toupper(getch())=='C')
                            {
                                printf("\n\n\t\t\t\t\tCorrect!!!");
                                countr++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\n\t\t\t\t\tWrong!!! The correct answer is C.8");
                                getch();
                                goto score;
                                break;
                            }
                        case 10:
                            timedate();
                            printf("\n\n\n\t\t\t\tWho is the founder of pixar animation?");
                            printf("\n\n\t\t\t\t\tA.Mark zuckerburg\tB.Tesla\n\n\t\t\t\t\tC.Steve jobs\t\tD.Bill gates");
                            if(toupper(getch())=='C')
                            {
                                printf("\n\n\t\t\t\t\tCorrect!!!");
                                countr++;
                                getch();
                                break;

                            }
                            else
                            {
                                printf("\n\n\t\t\t\t\tWrong!!! The correct answer is C.Steve jobs");
                                getch();
                                goto score;
                                break;
                            }

                        }
                    }

score:
                    system("cls");
                    score=(float)countr*100000;
                    if(score>0.00 && score<1000000)
                    {

                        printf("\n\n\t\t\t\t\t**************** CONGRATULATION *****************");
                        printf("\n\t\t\t\t\t           Your score %.2f",score);
                        goto go;
                    }

                    else if(score==1000000.00)
                    {

                        printf("\n\n\n \t\t\t\t\t**************** CONGRATULATION ****************");
                        printf("\n\t\t\t\t\t   YOU ARE A HIGH SCOURER!!!!!!!!!");
                        printf("\n\t\t\t\t\t         Your score %.2f",score);
                        printf("\n\t\t\t\t\t Thank You !!");
                    }
                    else
                    {

                        printf("\n\n\t\t\t\t\t******** SORRY YOU DIDN'T GET ANY POINT ********");
                        printf("\n\t\t\t\t\t Thanks for your participation");
                        printf("\n\t\t\t\t\t TRY AGAIN");
                        goto go;
                    }

go:
                    puts("\n\n\t\t\t\t\t Press Y if you want to play next game");
                    puts("\n\n\n\t\t\t\t\t Press any key if you want to go main menu");
                    if (toupper(getchar())=='Y')
                    {
                        goto home;
                    }
                    else
                    {
                        edit_score(score,playername);
                        goto mainhome;
                    }



                }
            }
            else if(a2==8)
            {
                timedate();
                printf("\t\t\t\t\t     Welcome to The\n\n\t\t\t\t\t       phonebook\n\n\n\n");
                printf("\t\t\t\t\tPress Continue switch to\n\t\t\t\t\t\tTo Start \n\t\t\t\t\t\tphonebook \n\n\n\n");
                printf("   ---------------                                                                             ----------------\n");
                printf("   | 1.Continue  |                                                                             |    2.Back    |\n");
                printf("   ---------------                                                                             ----------------\n\n\n\n");

                while(1)
                {
                    printf("Press Switch : ");
                    int p;
                    scanf("%d",&p);
                    system("cls");
                    if(p==1)
                    {
                        timedate();
                        phonebook();
                        printf("   ---------------                                                                             ----------------\n");
                        printf("   | 1.Continue  |                                                                             |    2.Back    |\n");
                        printf("   ---------------                                                                             ----------------\n\n\n\n");
                    }
                    else if(p==2)
                    {
                        timedate();
                        mainmanue();
                        break;


                    }
                }
            }
        }
    }
    return 0;

}


