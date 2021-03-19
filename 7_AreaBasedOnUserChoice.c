// Standard input and output
//Purpose:
//To find the area  of Circle, Square and Rectangle
//Area of Circle: (22/7)*r*r: radius
//Area of Square: side*side: side
//Area of Rectangle: length*breadth: length, breadth
#include <stdio.h>
int main(){
	float radiusOfCircle, sideOfSquare, lengthOfRectangle, breadthOfRectangle;
	scanf("%f %f %f %f", &radiusOfCircle, &sideOfSquare, &lengthOfRectangle, &breadthOfRectangle);
	printf("Area of Circle: %f",((22*radiusOfCircle*radiusOfCircle)/7));
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
	printf("\nArea of Rectangle: %f",(lengthOfRectangle*breadthOfRectangle));
	return 0;
}