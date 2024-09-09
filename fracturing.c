#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance() {
    double x1 ;
    double x2 ;
    double y1 ;
    double y2 ;
    double distance ;
    
    // Input

    //X1
    printf("Area: Enter x1");
    scanf("%lf", &x1);
    //X2
    printf("Enter x2");
    scanf("%lf", &x2);
    //Y1
    printf("Enter y1");
    scanf("%lf", &y1);
    //Y2
    printf("Enter y2");
    scanf("%lf", &y2);

    // Distance 
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // The output
    printf("Point #1 entered:", x1, y1);
    printf("Point #2 entered:", x2, y2);
    printf("The distance between the two points is ", distance)
    return distance;
}   

double calculatePerimeter() {
    // Calling distance function
    double distance = calculateDistance();
    double perimeter = PI * distance;

    // The output
    printf("The perimeter of the city encompassed by your request is", perimeter);

    return 2.5;
}    

double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2.0;
    double area = PI * radius * radius;

    // The output
    printf("The area of the city encompassed by your request is",area );

    return 3.5;
}    

double calculateWidth() {
    double distance = calculateDistance();
    double width = distance;

    //The output
    printf("The width of the city encompassed by your request is", width);

    return 2.0;
}

double calculateHeight(){
    double distance = calculateDistance();
    double height = distance;
    // The output
    printf("The height of the city encompassed by your request is", height);

    return 2.0;
}    










int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;

}