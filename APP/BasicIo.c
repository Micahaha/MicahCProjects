// pre-processor directives 

// include BasicIo.h header file

#include "./headers/BasicIo.h"

// write code or functions declared in BasicIo.h

// this function will use printf and puts to output
// data to stdout (terminal)
void output(void) {
    // printf formats and outputs data to stdout.
    // it does not append a new line character to
    // the end of its output
    printf("Your first name is %s\n", FIRST_NAME);
    printf("Your last name is %s\n", LAST_NAME);
    printf("Your weight is %f and your age is %d\n", WEIGHT, AGE);

    // put output a string to stdout.
    // it does append a new line character to
    // the end of its output
    puts(FIRST_NAME);
    puts(LAST_NAME);
}


//this function will use scanf to input data from
// stdin (terminal)
 void input(void){
    // declare variables to store input data
    int age;
    char name[] = ""; // this is a C sring
    float weight; 
    char fullname[50] = ""; // This is a C string too

    // fgets does not stop at the first string token when it
    // reads in a string
    printf("Enter your full name: ");
    fgets(fullname, sizeof fullname, stdin);
    printf("Entered full name is : %s", fullname);

    // prompt to input age
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Entered Age is : %d\n", age);

    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Entered Weight is : %.2f\n", weight);
    
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Entered Name is : %s\n", name);
}