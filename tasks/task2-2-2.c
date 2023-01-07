#include <stdio.h>
    // task 2.2.2
    int gornerTwo() {
        double x, x_n = 1, a, p_x = 0, p_dev = 0;
        int n = 0, c;
        printf("Enter value x: ");
        scanf("%lf", &x);
        while (1) {
            printf("Enter value a%d: ", n++);
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