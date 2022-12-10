#include <stdio.h>
#include "math.h"

void types_length();
void symbols_pos();
void root(double eps, double x);
float power(float x, int i);
void gornerOne();

// recursive func
int fibonacci(int f) {
    if(f == 0){
        return 0;
    } else if(f == 1) {
        return 1;
    } else {
    return (fibonacci(f-1) + fibonacci(f-2));
    }
}

// iterative func
int f_iter(int i){
    int f_prev=0, f_cur=1, tmp;
    if (i==0 || i==1) return i;
    for (int j=1; j<i; j++){
        tmp = f_cur;
        f_cur =  f_prev + f_cur;
        f_prev = tmp;
    }
    return f_cur;
}

int main() {

    //task 2.3
    //prints fibonacci sequence
//    int i, c;
//    while(1) {
//        int f_prev=0, f_cur=1, tmp;
//        printf("Enter value i: ");
//        c = scanf("%d", &i);
//        if (c == EOF) break;
//        printf("Iterative value= %d\n", f_iter(i));
//        printf("Recursive value= %d\n", fibonacci(i));
//    }


    // task 2.2.2
    // gornerOne();

    double x, x_n = 1, a, p_x = 0, p_dev = 0;
    int n = 0, c;
    printf("Enter value x:\n");
    scanf("%lf", &x);
    while (1) {
        printf("Enter value a%d:\n", n++);
        c = scanf("%lf", &a);
        if (c == EOF)
            break;
//        printf("x_%d=%.3lf\n", n++, x_n);
        p_dev = p_dev * x + p_x;
        p_x = p_x * x + a;
//        printf("px=%.3lf\n", p_dev);
//        x_n *= x;
    }
    printf("P(%.3lf)=%.3lf\n", x, p_x);
    printf("P_dev=%.3lf\n", p_dev);
    return 0;
}


//task 2.2.1
void gornerOne(){
    double x, x_n = 1, a, p_x = 0;
    int n = 0, c;
    printf("Enter value x:\n");
    scanf("%lf", &x);
    while (1) {
        printf("Enter value a%d:\n", n++);
        c = scanf("%lf", &a);
        if (c == EOF)
            break;
//        printf("x_%d=%.3lf\n", n++, x_n);
        p_x += a * x_n;
//        printf("px=%.3lf\n", p_x);
        x_n *= x;
    }
    printf("P(%.3lf)=%.3lf\n", x, p_x);
//    return 0;
}

//support power func
float power(float x, int i){
    float p = 1;
    if (i > 0) {
        for (int j = 0; j < i; ++j) {
            p = p * x;
        }
    }
    return p;
}

//task 1.1
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

//task 1.4
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

// task 2.1
void root(double _eps, double _x){
    double xi, root;
//    eps = 0.0000001;

    root = _x;
    xi = 1;

    while(root - xi >= _eps || xi - root >= _eps){
//    while(xi >= _eps){
        xi = root;
        root = (xi + _x/xi) / 2;
    }

    printf("The square root of '%.10g' is '%.10g'\n", _x, root);
    //check with math
    printf("Math check: %.10g\n\n", sqrt(_x));

}