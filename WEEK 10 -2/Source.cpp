#include <stdio.h>

int main()
{
	int x;
	int count1 = 1;
	int floor = 1;
	int r = 0;
	int c = 0;
	scanf_s("%d", &x);
	int tower = x - 1;
	for (int i = 0; i < x; i++)
	{

		for (int j = 0; j < tower; j++)
		{
			printf(" ");

		}
		if (floor == 1)
		{
			printf("*");
			floor++;
		}
		if (floor == 2 && r==1)
		{
			for (int k = 0; k < count1; k++)
			{
				printf("*");
			}
			for (int l = 0; l < count1-1; l++)
			{
				printf("*");
			}
		}
		printf("\n");
		if (floor == 2&& c==0)
		{
			r++;
			c++;
		}
		count1++;
		tower--;
	}
	/*for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < tower; j++)
		{
			printf(" ");

		}
		for (int k = 0; k < count; k++)
		{
			printf("*");
		}
		count = count + 2;
		tower--;
		printf("\n");
	}*/
}