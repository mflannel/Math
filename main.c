#include <stdio.h>

int s21_abs(int x);

int main() {
    int x = (s21_abs(-3));
    printf("%d", x);
    return 0;
}

int s21_abs(int x){
    return (x < 0 ? x *= -1 : x);
}

long double pow(double base, double exp) {

}