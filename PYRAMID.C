#include <stdio.h>
#include<conio.h>
int main()
{
    int rows,  space, i, j;
 
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=0; i<rows+1; i++)
    {
	for(space=1; space <= rows+1-i; space++)
	    printf("  ");

	for(j=0-i; j <= i; j++)
	{

	    printf("%2d",abs(j));

	}
	printf("\n");
    }

    getch();
}