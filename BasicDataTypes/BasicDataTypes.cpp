//
// Created by j on 4/13/2022.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    //input: spare separated values
    //output: print each element on a new line
    int a;// %d
    long b;// %ld
    char ch;// %c
    float d;// %f
    double e;// %lf

    /*char ch;
    double d;
    scanf("%c %lf", &ch, &d); //scanf("`format_specifier`", &val)*/
    scanf("%d", &a);
    scanf("%ld", &b);
    scanf(" %c", &ch);
    scanf("%f", &d);
    scanf("%lf", &e);
    // scanf("%d,%ld, %c,%f,%lf", &a, &b, &ch, &d, &e);
    // scanf("%d,%ld", &a, &b);

    /*char ch = 'd';
    double d = 234.432;
    printf("%c %lf", ch, d);//printf("`format_specifier`", val)*/
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", ch);
    printf("%.3f\n", d);
    printf("%.9lf\n", e);
    // printf("%d\n%ld\n%c\n%.3f\n%.9lf", a, b, ch, d, e);
    // printf("%d,%ld", a, b);

    return 0;

}
