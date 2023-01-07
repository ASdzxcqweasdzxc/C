/* str2dbl.c */
double str2double(const char str[]){
    double res=0, ten=10.0, e_pow=1.0;
    int sig = 1, j=0, afterdot=0, i=0, e_sign=0;
    if  (*str == '-') {
        sig = -1;
        j++;
    }

    // if dot, change multiplication to division
    while(str[j] != '\0'){
        if (str[j] == '.'){
            afterdot = 1;
            j++;
            if (str[j] == '\0') return res * sig;
        }

        // dealing with E cases
        // if got E then calculate leftovers here
        if (str[j] == 'E' || str[j] == 'e') {
            j++;
            if (str[j] == '-'){
                e_sign = 1;
                j++;
            }
            if (str[j] == '+') j++;
            while(str[j] != '\0'){
                i = i * 10 + (str[j] - '0');
                j++;
            }
            if (e_sign == 0) {
                for (int k = 0; k < i; ++k) {
                    e_pow *= 10;
                }
            } else {
                for (int k = 0; k < i; ++k) {
                    e_pow /= 10;
                }

            }
            return res * e_pow * sig;
        }

        if (afterdot == 0) {
            res = res * ten + (str[j] - '0');
        } else {
            res = res + (str[j] - '0') / ten;
            ten *= 10.0;
        }
        j++;
    }

    return res * sig;
}
