#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int len,i,random,current_y=5;
    char password[32],ch;



    gotoxy(20,3);
    printf("press enter to generate random password\n");
    gotoxy(30,4);
    SetColor(2);
     printf(" ===================");
    gotoxy(30,5);
    printf("| GENERATE_PASSWORD |");
    gotoxy(30,6);
     printf(" ===================");
    SetColor(7);

    gotoxy(20,8);
    printf("your password is: __________");



       gotoxy(20,11);
   printf("press enter to copy the password to clipboard:");

   gotoxy(30,12);
     printf(" ===================");
    gotoxy(30,13);
    printf("| COPY_PASSWORD     |");
    gotoxy(30,14);
     printf(" ===================");
    gotoxy(49,5);


     len=12+generate(21);


     while(1)
     {
         ch=getche();
         if(current_y==5)
         {
             if(ch==13)
             {

                 Generate_PassWord(password,len);
                 gotoxy(38,8);
                 printf("%s",password);
                 gotoxy(0,9);
                 printf("                                                                   ");
                 gotoxy(49,5);
             }
             else if(ch==9)
             {
                 Selection_Effect_Out(30,4,"GENERATE_PASSWORD");
                 Selection_Effect_In(30,12,"COPY_PASSWORD    ");
                 gotoxy(45,13);
                 current_y=13;
            }
            else
            {
                MessageBeep(1);
                MessageBoxA(NULL,"invalid input","ERROR!!!",MB_OK);
                gotoxy(49,5);
                printf(" ");
                gotoxy(49,5);
            }
         }
         else
         {
             if(ch==13)
             {
                 Copy_PassWord(password,len);
                 gotoxy(45,13);
             }
             else if(ch==9)
             {
                 Selection_Effect_Out(30,12,"COPY_PASSWORD    ");
                 Selection_Effect_In(30,4,"GENERATE_PASSWORD");
                 gotoxy(49,5);
                 current_y=5;
             }
             else
             {
                MessageBeep(1);
                MessageBoxA(NULL,"invalid input","ERROR!!!",MB_OK);
                gotoxy(45,13);
                printf(" ");
                gotoxy(45,13);
             }
         }
     }
    return 0;
}
