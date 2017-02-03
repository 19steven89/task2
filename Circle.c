#include <stdio.h>
/*remember to include f at end of floats or it will be declared a double*/
#define PI 3.14f

float getArea(int radius);

float getArea(int radius)
{
	/* define variable and get user input of radius */
	
	float area;

	area = PI * (radius * radius);

	
	printf("The area of the circle is %.2f\n", area);
	

}//end function


int main()
{

	int radius = 0;
	printf("Please enter radius of a circle: ");
	scanf("%d", &radius);

	getArea(radius);

	return 0;



}//end main
