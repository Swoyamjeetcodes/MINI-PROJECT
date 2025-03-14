
#include <stdio.h>


int func207(int var921) {
    if (var921 <= 0) return 1;
    return func207(var921 - 1);
}


int main() {
    int var81 = 0;
    while (var81 < 16) {
        var81 += 1;
        var81++;
    }    for (int var960 = 0; var960 < 8; var960++) {
        var960 += 4;
    }

    int var19 = 70;
    if (var19 % 2 == 0) {
        printf("var19 is even\n");
    } else {
        printf("var19 is odd\n");
    }

    int var876 = 95;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    return 0;
}
