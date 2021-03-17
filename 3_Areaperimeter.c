//Standard input and output
//Purpose:
// To find the area and perimeter of Circle, Square and Rectangle
//Area of Circle: (22/7)*r*r: radius
//Perimeter of Circle: 2*(22/7)*r: radius
//Area of Square: side*side: side
//Perimeter of Square: 4 * side: side
//Area of Rectangle: Length * Breadth: Length, Breadth
//Perimeter of Rectangle: 2*(Length + Breadth): Length, Breadth
#include<stdio.h>
int main(){
	float radiusOfCircle, sideOfSquare, lengthOfRectangle, breadthOfRectangle;
	radiusOfCircle=7;
	sideOfSquare=2;
	lengthOfRectangle=2;
	breadthOfRectangle=2;
    //scanf("%f %f %f %f",&radiusOfCircle, &sideOfSquare, &lengthOfRectangle, &breadthOfRectangle);
    printf("Area of Circle:%f",((22*radiusOfCircle*radiusOfCircle)/7));
	printf("\nPerimeter of Circle:%f",((2*22*radiusOfCircle)/7));
	printf("\nArea of Square:%f",(sideOfSquare*sideOfSquare));
	printf("\nPerimeter of Square:%f",(4*sideOfSquare));
	printf("\nArea of Rectangle:%f",(lengthOfRectangle*breadthOfRectangle));
	printf("\nPerimeter of Rectangle:%f",(2*(lengthOfRectangle + breadthOfRectangle)));
	return 0;

}   