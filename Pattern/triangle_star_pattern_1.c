#include<stdio.h>

int main()
{
    int rc;
    printf("Enter the Number of Rows : ");
    scanf("%d",&rc);
    printf("\n");
    for(int i=0; i<rc; i++)
    {
        for(int j=0; j<rc; j++)
        {
            if(j<=i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
