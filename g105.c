/*
In a hexagonal garden, each side measures a certain length. Write a program that takes the side length as input and calculates both the area and perimeter of the hexagonal garden. 



Formula

Area of a hexagon = a2 * 3.0 * ((√3.0)/2.0)
Perimeter of a hexagon = 6.0 * a, where a is the side length.


Note: The power is calculated using pow() function and the square root is calculated using sqrt() from the math library.

Input format :
The input consists of a double-value a, representing the side length of a hexagonal garden.

Output format :
The first line of output prints "Area: " followed by a double value representing the area of the hexagonal garden, rounded to two decimal places.

The second line prints "Perimeter: " followed by a double value representing the perimeter area of the hexagonal garden, rounded to two decimal places.



Refer to the sample output for formatting specifications.*/

#include <stdio.h>
#include <math.h>

double sideLength;

double Area() {
    double area = (3.0 * sqrt(3.0) / 2.0) * pow(sideLength, 2.0);
    return area;
}

double Perimeter() {
    double perimeter = 6.0 * sideLength;
    return perimeter;
}

int main() {
    scanf("%lf", &sideLength);

    double area = Area();
    double perimeter = Perimeter();

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
