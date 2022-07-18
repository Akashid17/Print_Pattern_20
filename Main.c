
#include<stdio.h>

void Display(int iNo1, int iNo2)
{
    if(iNo1 == 0 || iNo2 == 0)
    {
        if(iNo1 == iNo2)
        {
            printf("Unable to Print Pattern, Both Values are Zero\n");
            return;
        }

        if(iNo1 == 0)
        {
            printf("Unable to Print Pattern, Rows count is Zero\n");
            return;
        }
        if(iNo2 == 0)
        {
            printf("Unable to Print Pattern, Columns count is Zero\n");
            return;
        }
    }
    else
    {
        if(iNo1 < 0)
        {
            iNo1 = -iNo1;
        }

        if(iNo2 < 0)
        {
            iNo2 = -iNo2;
        }

        for(int i = 1; i <= iNo1; i++)
        {
            for(int j = 1; j <= iNo2; j++)
            {
                if(i % 2 != 0)
                {
                    printf(" %d\t",j);
                }
                else
                {
                    printf("%d\t",j*-1);                }
                }
            printf("\n");
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Numbers of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter Numbers of Columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}