/*
 * Write a standard MIN macro 
 * ie, macro that takes two arguments and returns the smaller of two arguments
 *
 */



#include<stdio.h>

#define MIN(A,B) (((A)<(B))?(A):(B))

/*
 * Make sure arguments in a macro has no side effects as they may appear multiple times in a macro body
 *
 */
void min_with_ptr_incrmnt()
{
	int num,least;
	int m[3] = {12,16,10};
	int *p;
	
	printf("Enter the number for checking Macro Side Effects\n");
	scanf("%d", &num);

        p = m;
        printf("  p = %p\n *p = %d\n *(p+1) = %d\n", p, *p, *(p+1));
        least = MIN(*p++, num);
        printf("Min(*%p++,%d) = %d\n",p,num,least);
        printf("  p = %p\n", p);
        printf(" *p = %d\n", *p);
}


/*
 * Take two user inputs and print the minimum
 */
void minimum()
{
	int a,b,c;

	printf("Enter two numbers for finding the minimum\n");
	scanf("%d", &a);
	scanf("%d", &b);

	c = MIN(a,b);
	printf("Min (%d,%d) = %d\n",a,b,c);
}


void main ()
{
	// print minimum of two arguments taken as input from console
	minimum();
	
	// Side effects of macro argument - 1 
	// Macro argument with pointer increment
	min_with_ptr_incrmnt();
}
