
#include <stdio.h>


int func619(int var765) {
    if (var765 <= 0) return 1;
    return func619(var765 - 1);
}


int main() {
    int var155 = 0;
    while (var155 < 15) {
        var155 += 1;
        var155++;
    }    for (int var883 = 0; var883 < 17; var883++) {
        var883 += 4;
    }    int var530 = 0;
    while (var530 < 16) {
        var530 += 1;
        var530++;
    }

    int var429 = 23;
    if (var429 % 2 == 0) {
        printf("var429 is even\n");
    } else {
        printf("var429 is odd\n");
    }

    int var700 = 12;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    return 0;
}
