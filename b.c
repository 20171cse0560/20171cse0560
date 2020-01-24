#include<stdio.h>
void main()
{
int item[50],i,n,lprice,flag;
printf("enter the num of items\n");
scanf("%d",&n);
printf("enter cost of %d items\n",n);
for(i=0;i<n;i++)
scanf("%d",&item[i]);
printf("the cost of items purchased by karans wife is\n");
for(i=0;i<n;i++)
printf("item[%d]=%d\n",i,item[i]);
printf("enter the lucky price\n");
scanf("%d",&lprice);
flag=0;
for(i=0;i<n;i++)
{
if(lprice==item[i])
{
flag=1;
break;
}
}
if(flag==1)
printf("karans wife is winner\n");
else
printf("karans wife is not a winner\n");
}
PRINTF
}
