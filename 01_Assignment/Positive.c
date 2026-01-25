#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0;


    printf("\n Enter a Integer Number:");
    scanf("%d",&No);


    if(No == 0 )
    {
        printf("\n Zero is Nutral ");
    }
    else if(No > 0 )
    {
        printf("\n %d is Positive:",No);
    }
    else
    {
        printf("\n %d is Negative:",No);
    }
    printf("\n\n Thank You For Visiting !!..");

    getch();
    return 0;
}

