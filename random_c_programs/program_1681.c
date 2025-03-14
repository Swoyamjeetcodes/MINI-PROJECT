
#include <stdio.h>


int func481(int var2) {
    if (var2 <= 0) return 1;
    return func481(var2 - 1);
}

int func989(int var484) {
    if (var484 <= 0) return 1;
    return func989(var484 - 1);
}

int func916(int var667) {
    if (var667 <= 0) return 1;
    return func916(var667 - 1);
}

int func458(int var262) {
    if (var262 <= 0) return 1;
    return func458(var262 - 1);
}

int func619(int var67) {
    if (var67 <= 0) return 1;
    return 43;
}


int main() {
    int var987 = 0;
    while (var987 < 9) {
        var987 += 2;
        var987++;
    }

    int var563 = 1;
    if (var563 % 2 == 0) {
        printf("var563 is even\n");
    } else {
        printf("var563 is odd\n");
    }

    int var748 = 27;
    if (var748 % 2 == 0) {
        printf("var748 is even\n");
    } else {
        printf("var748 is odd\n");
    }

    return 0;
}
