#include<windows.h>
#include<stdio.h>

DWORD Sum;
DWORD WINAPI Summation(LPVOID Param)
{
    DWORD Upper = *(DWORD*)Param;
    for(DWORD i=0;i<=Upper;i++)
    Sum +=i;
    return 0;
}

int main()
{
    DWORD ThreadID;
    HANDLE ThraedHandle;
    int Param;
    printf("Enter The Value of N: ");
    scanf("%d",&Param);
    ThraedHandle = CreateThread(NULL,0,Summation,&Param,0,&ThreadID);
    if (ThraedHandle != NULL)
    {
        WaitForSingleObject(ThraedHandle,INFINITE);
        CloseHandle(ThraedHandle);
        printf("THE SUM OF NUMBERS = %d\n",Sum);
    }
}