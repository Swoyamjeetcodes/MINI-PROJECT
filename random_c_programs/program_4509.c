
#include <stdio.h>


int func524(int var650) {
    if (var650 <= 0) return 1;
    return func524(var650 - 1);
}

int func598(int var801) {
    if (var801 <= 0) return 1;
    return func598(var801 - 1);
}


int main() {
    int var697 = 0;
    while (var697 < 18) {
        var697 += 3;
        var697++;
    }    for (int var422 = 0; var422 < 6; var422++) {
        var422 += 2;
    }    for (int var710 = 0; var710 < 12; var710++) {
        var710 += 5;
    }

    int var673 = 87;
    if (var673 % 2 == 0) {
        printf("var673 is even\n");
    } else {
        printf("var673 is odd\n");
    }

    return 0;
}
