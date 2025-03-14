
#include <stdio.h>


int func306(int var708) {
    if (var708 <= 0) return 1;
    return func306(var708 - 1);
}


int main() {
    for (int var414 = 0; var414 < 11; var414++) {
        var414 += 5;
    }    for (int var531 = 0; var531 < 15; var531++) {
        var531 += 2;
    }    int var159 = 0;
    while (var159 < 9) {
        var159 += 4;
        var159++;
    }

    int var548 = 95;
    if (var548 % 2 == 0) {
        printf("var548 is even\n");
    } else {
        printf("var548 is odd\n");
    }

    int var888 = 15;
    if (var888 % 2 == 0) {
        printf("var888 is even\n");
    } else {
        printf("var888 is odd\n");
    }

    int var449 = 95;
    if (var449 % 2 == 0) {
        printf("var449 is even\n");
    } else {
        printf("var449 is odd\n");
    }

    return 0;
}
