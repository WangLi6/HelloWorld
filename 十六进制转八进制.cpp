#include<stdio.h>
#include<string.h>
int fun(int a,int i,int b);
int main()
{
	char a[10][100000],b[10][100000];
	int sum=0,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
		sum=0;
		for(int i=0;i<strlen(a[j]);i++)
		{
			if(a[j][i]>57)
			{
				switch(a[j][i])
				{
				case 'A':a[j][i]=10;break;
				case 'B':a[j][i]=11;break;
				case 'C':a[j][i]=12;break;
				case 'D':a[j][i]=13;break;
				case 'E':a[j][i]=14;break;
				case 'F':a[j][i]=15;break;
				}
			}
			else
				a[j][i]-=48;
			sum+=fun(a[j][i],i,strlen(a[j]));
		}
		for(int i=0;sum>0;i++)
		{
			b[j][i]=sum%8;
			sum/=8;
		}
		for(int i=strlen(b[j])-1;i>=0;i--)
		{
			printf("%d",b[j][i]);
		}
		printf("\n");
	}
}
int fun(int a,int i,int b)
{
	for(int j=0;j<b-i-1;j++)
	{
		a*=16;
	}
	return a;
}
