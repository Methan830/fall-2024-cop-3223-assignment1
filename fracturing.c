// Ethan Mangaroo
// 5629504

#include <stdio.h>
#include <math.h>
#define PI 3.14159
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    
    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter x1, y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2, y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance(); 
    double perimeter = 2 * distance;
    
    printf("The perimeter of the city encompassed by your request s %.2lf\n", perimeter);
    
    return 3.0;
}


double calculateArea() {
    double distance = calculateDistance(); 
    double area = distance * distance; 
    
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return 2.5; 
}


double calculateWidth() {
    double distance = calculateDistance();
    double width = distance; 
    
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    
    return 2.5; 
}


double calculateHeight() {
    double distance = calculateDistance(); 
    double height = distance; 
    
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    
    
    return 3.0; 
}


