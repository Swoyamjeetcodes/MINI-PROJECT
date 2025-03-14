
#include <stdio.h>


int func994(int var828) {
    if (var828 <= 0) return 1;
    return func994(var828 - 1);
}


int main() {
    for (int var342 = 0; var342 < 20; var342++) {
        var342 += 3;
    }    for (int var24 = 0; var24 < 8; var24++) {
        var24 += 2;
    }

    int var387 = 70;
    if (var387 % 2 == 0) {
        printf("var387 is even\n");
    } else {
        printf("var387 is odd\n");
    }

    int var450 = 69;
    if (var450 % 2 == 0) {
        printf("var450 is even\n");
    } else {
        printf("var450 is odd\n");
    }

    return 0;
}
