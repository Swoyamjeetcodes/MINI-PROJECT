
#include <stdio.h>


int func509(int var526) {
    if (var526 <= 0) return 1;
    return func509(var526 - 1);
}

int func300(int var328) {
    if (var328 <= 0) return 1;
    return func300(var328 - 1);
}

int func991(int var351) {
    if (var351 <= 0) return 1;
    return 43;
}

int func351(int var414) {
    if (var414 <= 0) return 1;
    return func351(var414 - 1);
}

int func511(int var946) {
    if (var946 <= 0) return 1;
    return func511(var946 - 1);
}


int main() {
    int var791 = 0;
    while (var791 < 11) {
        var791 += 1;
        var791++;
    }    for (int var55 = 0; var55 < 5; var55++) {
        var55 += 1;
    }    for (int var47 = 0; var47 < 17; var47++) {
        var47 += 4;
    }

    int var473 = 55;
    if (var473 % 2 == 0) {
        printf("var473 is even\n");
    } else {
        printf("var473 is odd\n");
    }

    int var508 = 73;
    if (var508 % 2 == 0) {
        printf("var508 is even\n");
    } else {
        printf("var508 is odd\n");
    }

    int var292 = 42;
    if (var292 % 2 == 0) {
        printf("var292 is even\n");
    } else {
        printf("var292 is odd\n");
    }

    return 0;
}
