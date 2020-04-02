#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,y;
    printf("\nEnter head position : ");
    scanf("%d",&a);   //a points to current position
    printf("\nEnter order number of requests : ");
    scanf("%d",&y);
    int x[y];       //x is the request list
    for(i=0;i<y;i++)
    {
      scanf("%d",&x[i]);
    }
    int v=x[0]-a;
    if(v<0)
    {
      v=v*-1;
    }
    for(i=1;i<y;i++)
    {
       if((x[i]-x[i-1])>0)
        v=v+(x[i]-x[i-1]);
       else
        v=v+(x[i-1]-x[i]);
    }
    printf("\n\n Seek time is s = %d\n",v);
    getch();
}
