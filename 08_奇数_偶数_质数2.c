#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,p;
	printf("0到100中的奇数有：\n");
	for(i=0;i<=100;i++)
	{
		if(i%2!=0)
			printf("%d  ",i);
	}
	printf("\n2到1000的质数有：\n");
	for(i=2;i<=1000;i++)
	{
		for(j=2,p=1;j<=(sqrt(i));j++)
		{
			if(i%j==0)
			{
				p=0;
				break;
			}
		}
		if(p)
			printf("%d  ",i);
	}
	while(1);
	return 0;
}