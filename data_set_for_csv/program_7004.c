
#include <stdio.h>


int func911(int var758) {
    if (var758 <= 0) return 1;
    return func911(var758 - 1);
}


int main() {
    int var323 = 0;
    while (var323 < 8) {
        var323 += 2;
        var323++;
    }    int var662 = 0;
    while (var662 < 6) {
        var662 += 1;
        var662++;
    }    int var336 = 0;
    while (var336 < 18) {
        var336 += 1;
        var336++;
    }    for (int var146 = 0; var146 < 20; var146++) {
        var146 += 4;
    }    int var459 = 0;
    while (var459 < 17) {
        var459 += 5;
        var459++;
    }    for (int var454 = 0; var454 < 7; var454++) {
        var454 += 5;
    }    int var22 = 0;
    while (var22 < 14) {
        var22 += 1;
        var22++;
    }

    int var442 = 99;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    return 0;
}
