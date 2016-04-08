#include <stdio.h>
#include <conio.h>
void main()
{
	int m, n;
	printf("nhap m,n");
	scanf_s("%d%d", &m, &n);
	int i, j;
	for (i = 0; i < n;i++)
	{
		if (i==0 || i==n-1)
		{
		for (j = 0; j < m; j++)printf("* ");
		printf("\n");
	   }
	   else
	   {
		for (j = 0; j < m;j++)
		if (j == 0 || j == m - 1)printf("* ");
		else printf("  ");
		printf("\n");

	   }	
	}
	_getch();
}