#include<stdio.h>
int main()
{
	int numbers[5];
    int max;
    int i;
    printf("enter 5 elements:\n");
    for(i=1;i<5;i++)
    {
    	printf("enter element %d:",i+1);
		scanf("%d",&numbers[i]);
	}
	max=numbers[0];
	for(i=1;i<5;i++)
	{
		if(numbers[i]>max)
		{
			max=numbers[i];
		}
	}
	printf("\nmaximum element=%d\n",max);
	return 0;
}