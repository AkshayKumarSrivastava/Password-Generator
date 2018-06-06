#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

Copy_PassWord(char password[],int len)
{

        HGLOBAL hMem =  GlobalAlloc(GMEM_MOVEABLE, len+1);
        memcpy(GlobalLock(hMem), password, len+1);
        GlobalUnlock(hMem);
        OpenClipboard(0);
        EmptyClipboard();
        SetClipboardData(CF_TEXT, hMem);
        CloseClipboard();

        MessageBoxA(NULL,"your password was successfully copied to clipboard\n        press ctrl+v in notepad to check","ERROR",MB_OK);
}
