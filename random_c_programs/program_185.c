
#include <stdio.h>


int func736(int var46) {
    if (var46 <= 0) return 1;
    return func736(var46 - 1);
}


int main() {
    int var462 = 0;
    while (var462 < 19) {
        var462 += 4;
        var462++;
    }    for (int var31 = 0; var31 < 9; var31++) {
        var31 += 4;
    }    for (int var609 = 0; var609 < 19; var609++) {
        var609 += 2;
    }

    int var721 = 78;
    if (var721 % 2 == 0) {
        printf("var721 is even\n");
    } else {
        printf("var721 is odd\n");
    }

    int var874 = 60;
    if (var874 % 2 == 0) {
        printf("var874 is even\n");
    } else {
        printf("var874 is odd\n");
    }

    return 0;
}
