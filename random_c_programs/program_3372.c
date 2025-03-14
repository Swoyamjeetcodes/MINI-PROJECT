
#include <stdio.h>


int func91(int var853) {
    if (var853 <= 0) return 1;
    return func91(var853 - 1);
}

int func408(int var77) {
    if (var77 <= 0) return 1;
    return func408(var77 - 1);
}


int main() {
    int var135 = 0;
    while (var135 < 14) {
        var135 += 4;
        var135++;
    }    for (int var429 = 0; var429 < 5; var429++) {
        var429 += 4;
    }    int var177 = 0;
    while (var177 < 20) {
        var177 += 1;
        var177++;
    }

    int var529 = 20;
    if (var529 % 2 == 0) {
        printf("var529 is even\n");
    } else {
        printf("var529 is odd\n");
    }

    int var557 = 59;
    if (var557 % 2 == 0) {
        printf("var557 is even\n");
    } else {
        printf("var557 is odd\n");
    }

    int var851 = 20;
    if (var851 % 2 == 0) {
        printf("var851 is even\n");
    } else {
        printf("var851 is odd\n");
    }

    return 0;
}
