//recursion last lecture
#include<stdio.h>

void DisplayI(int no)
{
    int i=1;
    while(i<=no)
    {
        printf("*\n");
        i++;
    }
      printf("\n");
}

void DisplayR(int no)         //recursive ffunction
{
    static int i=1;
    if(i<=no)
    {
        printf("*\n");
        i++;
        DisplayR(no);   //recursive call;
    }
}

int main()
{
    int value=3;
    DisplayI(4);
    DisplayR(value);
    printf("End of main\n");
    return 0;
}