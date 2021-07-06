#include<stdio.h>

int main()
{

	int n = 0;
	printf("enter n\n");
	scanf("%d",&n);	
	char str[n][50];
	
	printf("Enter %d words\n",n);
	for(int i = 1;i <= n+1;i++)
		fgets(str[i], sizeof(str[i]), stdin);
	
	printf("words are \n");
		for(int i = 1;i<= n+1;i++)
			printf("%s\n",str[i]);
	return 0;
}
