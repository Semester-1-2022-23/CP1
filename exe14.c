/*Create a C Program that will do the following below:
The program should allow the user to input a value for variables a, b, C and be able to determine
if the sides/angles represent a Right Triangle, Acute Triangle or an Obtuse Triangle.
Note the following facts:
1. A triangle has 3 sides a, b, c and 3 angles A, B, C, where angle A is opposite side a, angle
B is opposite side b, and angle C is opposite side c.
2. A triangle is a right triangle if one angle measures 90 degrees. A triangle is an obtuse
triangle if one angle measures more than 90 degrees. A triangle is an acute triangle if all
angles measure less than 90 degrees.
3. Cosine Law states that:
a. c2 = a2 + b2 – 2ab(cos C)
b. b2 =a2 +c2 –2ac(cosB)
c. a2 =b2 +c2 –2bc(cosA)
4. Sine Law states that: a/sin A = b/sin B = c/sin C
5. 180 degrees is equal to π radians.*/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter the value of a, b, and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    double cosA = (b*b + c*c - a*a)/(2*b*c);
    double cosB = (a*a + c*c - b*b)/(2*a*c);
    double cosC = (a*a + b*b - c*c)/(2*a*b);
    if(cosA == -1 || cosB == -1 || cosC == -1){
        printf("This is an obtuse triangle.\n");
    }
    else if(cosA == 0 || cosB == 0 || cosC == 0){
        printf("This is a right triangle.\n");
    }
    else {
        printf("This is an acute triangle.\n");
    }
    return 0;
}
