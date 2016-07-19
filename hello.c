#include<stdio.h>
int main()
{
	int x;
	printf("How many times have you visited GITHUB before? ");
	scanf("%d",&x);
	int i;
	printf("So, this is your visit number: %d at GITHUB.. \nThis calls for a celebration\n",x+1);
	for(i=0;i<x+1;i++)
	{
		printf("Hello \n");
	}
	return 0;
}