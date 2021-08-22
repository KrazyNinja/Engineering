/*
Write a program in C to compute the roots of a quadratic equation.

cmd -> gcc problem.c -lm
Add the -lm switch to specify that you want to link against the standard C math library (libm) which has the definition for those functions (the header just has the declaration for them - worth looking up the difference.)

*/

#include<stdio.h>
#include <math.h>
int main()
{
	int const1=0,const2=0,const3=0;
	double root1=0,root2=0,mid=0;
	
	printf("Enter number for x2 ");
	scanf("%d",&const1);
	printf("Enter number for x ");
	scanf("%d",&const2);
	printf("Enter number for constant ");
	scanf("%d",&const3);
	
	const3=(const2*const2)-(4*const1*const3);
	
	if(mid>0)
	{
		mid=sqrt(mid);
	}
	
	root1=(-const2+mid)/(2*const1);
	root2=(-const2-mid)/(2*const1);
	
	printf("Roots of %dX2 + %dX + %d is %.2lf and %.2lf",const1,const2,const3,root1,root2);

	return 0;
}
