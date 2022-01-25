#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



// int aoa1( int x)
//{
//	int z = x;
//	while (x <1)
//	{
//		--x;
//		z = z * x;
//	}
//	return z;
//}




int main()
{
	 int n,ams,ann;
	ann = 1;
	scanf("%d", &n);
	ams = n;
	while (ams > 1);
	{
		//ams = aoa1(a);
		int aoa1(int x);
		ann=ann+ aoa1(ams);
		ams--;
	}
	printf("%d", ann);
	return 0;
  
	/*int a, i;
	scanf("%d", &a);
	i = a - 1;
	for(;i!=1;--i)
	{
		a= a * i;
	}
	printf("%d", a);*/
}
