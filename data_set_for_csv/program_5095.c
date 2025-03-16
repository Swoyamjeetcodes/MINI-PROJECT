
#include <stdio.h>


int func118(int var807) {
    if (var807 <= 0) return 1;
    return func118(var807 - 1);
}


int main() {
    int var878 = 0;
    while (var878 < 7) {
        var878 += 2;
        var878++;
    }    int var518 = 0;
    while (var518 < 19) {
        var518 += 2;
        var518++;
    }    for (int var776 = 0; var776 < 20; var776++) {
        var776 += 1;
    }

    int var289 = 20;
    if (var289 % 2 == 0) {
        printf("var289 is even\n");
    } else {
        printf("var289 is odd\n");
    }

    int var84 = 99;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    int var689 = 26;
    if (var689 % 2 == 0) {
        printf("var689 is even\n");
    } else {
        printf("var689 is odd\n");
    }

    return 0;
}
