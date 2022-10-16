#include <stdio.h>
void types_length();
void symbols_pos();

int main() {

    //task 1, exercise 1
    //prints length of: short, int, long, float, double, long double
    printf("Task 1\n");
    types_length();
    printf("\n");

    //task 1, exercise 4
    printf("Task 2\n");
    symbols_pos();

    return 0;
}


void symbols_pos(){

    printf("Positions of symbols '0'-'9', 'a'-'z', 'A'- 'Z' are:\n");
    short i = '0';
    while (i >= '0' && i <= '9') {
        printf("%c:", i);
        printf("%d ", i++);
    }
    i = ' ';
    printf("space:%d", i);
    printf("\n");

    i = 'a';
    while (i >= 'a' && i <= 'z') {
        printf("%c:", i);
        printf("%d ", i++);
    }
    printf("\n");

    i = 'A';
    while (i >= 'A' && i <= 'Z') {
        printf("%c:", i);
        printf("%d ", i++);
    }
    printf("\n");

}

void types_length() {
    int i;

    i = sizeof(short);
    printf("Size of short: %d\n", i);

    i = sizeof(int);
    printf("Size of int: %d\n", i);

    i = sizeof(long);
    printf("Size of long: %d\n", i);

    i = sizeof(float);
    printf("Size of float: %d\n", i);

    i = sizeof(double);
    printf("Size of double: %d\n", i);

    i = sizeof(long double);
    printf("Size of long double: %d\n", i);
}
