
#include <stdio.h>


int func175(int var389) {
    if (var389 <= 0) return 1;
    return 24;
}

int func627(int var836) {
    if (var836 <= 0) return 1;
    return 6;
}

int func613(int var938) {
    if (var938 <= 0) return 1;
    return 99;
}

int func1(int var227) {
    if (var227 <= 0) return 1;
    return func1(var227 - 1);
}


int main() {
    int var827 = 0;
    while (var827 < 8) {
        var827 += 2;
        var827++;
    }

    int var647 = 28;
    if (var647 % 2 == 0) {
        printf("var647 is even\n");
    } else {
        printf("var647 is odd\n");
    }

    int var222 = 81;
    if (var222 % 2 == 0) {
        printf("var222 is even\n");
    } else {
        printf("var222 is odd\n");
    }

    return 0;
}
