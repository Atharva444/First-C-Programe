/*Example 2:Program to calculate Circumference of a circle*/

#include <stdio.h>
#define PI 3.14
int main()
{
	float radius, circumference;
	printf("\nEnter the value of radius:");
	scanf("%f",&radius);
	circumference=2*PI*radius;
	printf("\nCircumference of circle with radius %f is %f \n \n",radius,circumference);
	return 0;
}
/*End of program*/