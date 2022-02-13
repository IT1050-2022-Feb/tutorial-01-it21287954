/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int n, i, sum =0;//initialization variables
	//getting the number from the keyboard
	printf("Enter a number : ");
	scanf("%d", &n);
	//adding the numbers upto n
	for (i=1; i<=n; i++)
	{
		sum = sum + i;
	}
	
	printf("The sum of the numbers upto %d is : %d", n, sum);
	
  return 0;
}

