#include <stdio.h>

int main()
{
    int x;       // This is a variable declaration
    x = 123;     // This is a variable assignment
    int y = 321; // This is a variable declaration and assignment
    int sum = x + y;
    printf("The sum of %d and %d is %d\n", x, y, sum);

    int age = 47;         // integer
    float gpa = 10.9;     // floating point number
    char grade = 'C';     // single character
    char name[] = "Greg"; // string or array of characters

    // insert varibles into a string using placeholders
    printf("Hello %s\n", name);                  // %s is a placeholder for a string
    printf("You are %d years old\n", age);       // %d is a placeholder for an integer
    printf("Your average grade is %c\n", grade); // %c is a placeholder for a character
    printf("Your gpa is %f\n", gpa);             // %f is a placeholder for a float

    return 0;
}