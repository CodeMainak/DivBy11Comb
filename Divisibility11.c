#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int power(int n,int r)
{	
	int i,res=1;
	for(i=0;i<r;i++)
	{	
		res=res*n;
	}
	return res;
}
int main()
{
    int c=0,n,sum=0,j=1,r=0,n1,i;
    printf("Enter an integer: ");
    scanf("%d",&n);
    n1=n;
    while(n != 0)
    {
        n=n/10;
        c++;
    }
    int a[c],b[c];
    for(int i=1;i<=c;i++)
    {
	r=n1%10;
	n1=n1/10;
	a[i]=r;
    }
    for(int i=c;i>0;i--)
    {
	b[j++]=a[i];
    } 
    int count=0;
    for(i=1;i<=c;i++)
    {
	sum=0;
	j=i;
	int k=1;
	while(j<=c)
	{
		sum=sum+power(-1,k+1)*b[j++];
		k++;
		if(sum%11==0)
		{
			count++;
		}
	}
	
     }
     printf("The number of combination that can be devided by 11 is %d.",count);
}

