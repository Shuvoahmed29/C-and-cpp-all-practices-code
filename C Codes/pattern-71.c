#include<stdio.h>
int main()
{
    int n,space,col,row;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=(n-row);space++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
