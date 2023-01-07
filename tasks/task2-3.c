/** task 2-3 */
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
