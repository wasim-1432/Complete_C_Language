#include<stdio.h>

int main() {
    int a = 0, b = 1, s = 0, n;
    printf("Enter any number\n");
    scanf("%d", &n);
    int t = n; 
    while (t) {
        if (s == n) {
            printf("Fibo term: %d\n", s);
            break;
        }
        a = b;
        b = s;
        s = a + b;
        t--;
    }
    
    if (t == 0) {
        printf("Fibo term not found\n");
    }
    return 0;
}
