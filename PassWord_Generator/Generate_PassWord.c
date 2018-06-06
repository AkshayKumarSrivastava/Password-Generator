#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
void Generate_PassWord(char password[],int len)
{
      SYSTEMTIME stime1;
    int i,random;
      GetSystemTime(&stime1);
    password[0]=97+generate(26);
    password[len-1]=65+generate(26);

    for(i=1;i<len-1;i++)
    {
        random=generate(10);
        if(random<7)
        {
            if(random%2==0)
            {
                password[i]=65+generate(26);
            }
            else
            {
                password[i]=97+generate(26);
            }
        }
        else if(random==8||random==7)
        {
            password[i]=48+generate(10);
        }
        else
        {
            password[i]=33+generate(14);
        }
    }
      password[1+generate(len-2)]=48+generate(10);
    // delay(stime1.wMilliseconds%17);
    password[1+generate(len-2)]=33+generate(14);
    password[len]='\n';
}
