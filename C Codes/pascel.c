#include<stdio.h>
int main()
{
    int n,no,col,row,space;
    printf("Enter the rows number:  ");
    scanf("%d",&no);
    for(row=0;row<no;row++)
    {
        for(space=0;space<(no-row);space++)
        {
            printf(" ");
        }
        n=1;
        for(col=0;col<=row;col++)
        {
            printf(" %d",n);
 n=n*(row-col)/(col+1);
        }

            printf(" \n");
    }
    return 0;
}
