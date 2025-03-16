
#include <stdio.h>


int func501(int var80) {
    if (var80 <= 0) return 1;
    return func501(var80 - 1);
}


int main() {
    for (int var294 = 0; var294 < 6; var294++) {
        var294 += 3;
    }    for (int var416 = 0; var416 < 13; var416++) {
        var416 += 4;
    }    int var309 = 0;
    while (var309 < 19) {
        var309 += 5;
        var309++;
    }

    int var217 = 55;
    if (var217 % 2 == 0) {
        printf("var217 is even\n");
    } else {
        printf("var217 is odd\n");
    }

    int var33 = 90;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    return 0;
}
