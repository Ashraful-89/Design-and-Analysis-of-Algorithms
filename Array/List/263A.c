#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,count=0,input;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&input);
            if(input==1)
            {
                count=abs(i-3)+abs(j-3);
            }
 
        }
 
    }
    printf("%d",count);
    return 0;
}
