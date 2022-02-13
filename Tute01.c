/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{  
  int sub1, sub2, tot, ave;//variable initialization
	//getting the marks
	printf ("Enter the marks of subject 1 : ");
	scanf ("%d", &sub1);
	printf ("Enter the marks of subject 2 : ");
	scanf ("%d", &sub2);
	//calculating the average
	tot = sub1 + sub2; 
	ave = tot / 2;
	//printing the average
	printf("The average is : %d", ave);
	
  return 0;
}

