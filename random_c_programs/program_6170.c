
#include <stdio.h>


int func250(int var422) {
    if (var422 <= 0) return 1;
    return func250(var422 - 1);
}

int func41(int var639) {
    if (var639 <= 0) return 1;
    return func41(var639 - 1);
}


int main() {
    for (int var646 = 0; var646 < 9; var646++) {
        var646 += 1;
    }

    int var439 = 25;
    if (var439 % 2 == 0) {
        printf("var439 is even\n");
    } else {
        printf("var439 is odd\n");
    }

    int var996 = 53;
    if (var996 % 2 == 0) {
        printf("var996 is even\n");
    } else {
        printf("var996 is odd\n");
    }

    int var806 = 51;
    if (var806 % 2 == 0) {
        printf("var806 is even\n");
    } else {
        printf("var806 is odd\n");
    }

    return 0;
}
