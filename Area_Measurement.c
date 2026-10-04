#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a, b, c, d, e, f, g , h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
printf("Welcome to Land Measurement Calculator. \n");
printf("Do you want to measure any area whether it is a triangle, rectangle, square, trapezium, rhombus, parallelogram or circle? \n");
printf("If yes, then at first please read the following details: \n");
printf("Is your area a triangle? If yes, then please enter 1. \n");
printf("Is your area a rectangle? If yes, then please enter 2. \n");
printf("Is your area a square? If yes, then please enter 3. \n");
printf("Is your area a trapezium? If yes, then please enter 4. \n");
printf("Is your area a rhombus? If yes, then please enter 5. \n");
printf("Is your area a parallelogram? If yes, then please enter 6. \n");
printf("Is your area a circle? If yes, then please enter 7. \n");
printf("Please enter your choice: ");
    scanf("%f", &a);
    if (a == 1)
    {
        printf("You have selected triangle. \n");
        printf("So if you have the base and height of the triangle then press 1 or if you have the three sides of the triangle then press 2: \n");
        printf("Please enter your choice: ");
        scanf("%f", &b);
        if (b == 1)
        {
            printf("Please enter the base of the triangle: ");
            scanf("%f", &c);
            printf("Please enter the height of the triangle: ");
            scanf("%f", &d);
            printf("The area of the triangle is: %f", 0.5 * c * d);
        }
        else
        {
            printf("Please enter the first side of the triangle: ");
            scanf("%f", &e);
            printf("Please enter the second side of the triangle: ");
            scanf("%f", &f);
            printf("Please enter the third side of the triangle: ");
            scanf("%f", &g);
            float s = (e + f + g) / 2;
            printf("The area of the triangle is: %f", sqrt(s * (s - e) * (s - f) * (s - g)));
        }
    }
    else if (a == 2)
    {
        printf("You have selected rectangle. \n");
        printf("So if you have the length and width of the rectangle then press 1 or if you have the diagonal of the rectangle then press 2: \n");
        printf("Please enter your choice: ");
        scanf("%f", &b);
        if (b == 1)
        {
            printf("Please enter the length of the rectangle: ");
            scanf("%f", &c);
            printf("Please enter the width of the rectangle: ");
            scanf("%f", &d);
            printf("The area of the rectangle is: %f", c * d);
        }
        else
        {
            printf("Please enter the diagonal of the rectangle: ");
            scanf("%f", &e);
            printf("Please enter the length of the rectangle: ");
            scanf("%f", &f);
            float width = sqrt(e * e - f * f);
            printf("The area of the rectangle is: %f", f * width);
        }
    }
    else if (a == 3)
    {
        printf("You have selected square. \n");
        printf("So if you have the side of the square then press 1 or if you have the diagonal of the square then press 2: \n");
        printf("Please enter your choice: ");
        scanf("%f", &b);
        if (b == 1)
        {
            printf("Please enter the side of the square: ");
            scanf("%f", &c);
            printf("The area of the square is: %f", c * c);
        }
        else
        {
            printf("Please enter the diagonal of the square: ");
            scanf("%f", &c);
            printf("The area of the square is: %f", 0.5 * c * c);
        }
    }
    else if (a == 4)
    {
        printf("You have selected trapezium. \n");
 
        printf("Please enter the first base of the trapezium: ");
        scanf("%f", &g);
        printf("Please enter the second base of the trapezium: ");
        scanf("%f", &h);
        printf("Please enter the height of the trapezium: ");
        scanf("%f", &i);
        printf("The area of the trapezium is: %f", 0.5 * (g + h) * i);
        
    }
    
    else if (a == 5)
    {
        printf("You have selected rhombus. \n");
        printf("Please enter the first diagonal of the rhombus: ");
        scanf("%f", &j);
        printf("Please enter the second diagonal of the rhombus: ");
        scanf("%f", &k);
        printf("The area of the rhombus is: %f", 0.5 * j * k);
    }
        
    else if (a == 6)
    {
        printf("You have selected parallelogram. \n");
        printf("Please enter the base of the parallelogram: ");
        scanf("%f", &l);
        printf("Please enter the height of the parallelogram: ");
        scanf("%f", &m);
        printf("The area of the parallelogram is: %f", l * m);
    }
    else if (a == 7)
    {
        printf("You have selected circle. \n");
        printf("Please enter the radius of the circle: ");
        scanf("%f", &n);
        printf("The area of the circle is: %f", 3.1416 * n * n);
    }
    else
    {
        printf("You have entered an invalid choice. \n");
        printf("Please enter a valid choice. \n");
    }
    return 0;

}
