
#include <stdio.h>


int func282(int var453) {
    if (var453 <= 0) return 1;
    return func282(var453 - 1);
}

int func729(int var224) {
    if (var224 <= 0) return 1;
    return func729(var224 - 1);
}


int main() {
    int var801 = 0;
    while (var801 < 13) {
        var801 += 2;
        var801++;
    }    for (int var605 = 0; var605 < 8; var605++) {
        var605 += 3;
    }    for (int var578 = 0; var578 < 5; var578++) {
        var578 += 5;
    }

    int var176 = 90;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    int var9 = 79;
    if (var9 % 2 == 0) {
        printf("var9 is even\n");
    } else {
        printf("var9 is odd\n");
    }

    return 0;
}
