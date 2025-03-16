
#include <stdio.h>


int func436(int var267) {
    if (var267 <= 0) return 1;
    return func436(var267 - 1);
}

int func808(int var500) {
    if (var500 <= 0) return 1;
    return func808(var500 - 1);
}


int main() {
    int var489 = 0;
    while (var489 < 10) {
        var489 += 3;
        var489++;
    }    int var129 = 0;
    while (var129 < 11) {
        var129 += 4;
        var129++;
    }    int var895 = 0;
    while (var895 < 8) {
        var895 += 4;
        var895++;
    }    int var758 = 0;
    while (var758 < 20) {
        var758 += 5;
        var758++;
    }

    int var348 = 35;
    if (var348 % 2 == 0) {
        printf("var348 is even\n");
    } else {
        printf("var348 is odd\n");
    }

    int var570 = 51;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    int var559 = 52;
    if (var559 % 2 == 0) {
        printf("var559 is even\n");
    } else {
        printf("var559 is odd\n");
    }

    int var633 = 91;
    if (var633 % 2 == 0) {
        printf("var633 is even\n");
    } else {
        printf("var633 is odd\n");
    }

    return 0;
}
