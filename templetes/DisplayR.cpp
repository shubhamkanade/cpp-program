#include<stdio.h>
void DisplayR(int iNo)
{
	static int i=1;
	if(i<=iNo)
	{
		i++;	
		DisplayR(iNo);
		printf("%d",--i);
		
	
	}
}
int main()
{
	DisplayR(5);
	return 0;
}
