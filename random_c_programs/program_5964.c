
#include <stdio.h>


int func648(int var636) {
    if (var636 <= 0) return 1;
    return func648(var636 - 1);
}

int func673(int var146) {
    if (var146 <= 0) return 1;
    return func673(var146 - 1);
}

int func181(int var417) {
    if (var417 <= 0) return 1;
    return func181(var417 - 1);
}

int func927(int var29) {
    if (var29 <= 0) return 1;
    return 86;
}


int main() {
    for (int var566 = 0; var566 < 14; var566++) {
        var566 += 3;
    }    for (int var53 = 0; var53 < 20; var53++) {
        var53 += 1;
    }    int var293 = 0;
    while (var293 < 16) {
        var293 += 3;
        var293++;
    }

    int var943 = 71;
    if (var943 % 2 == 0) {
        printf("var943 is even\n");
    } else {
        printf("var943 is odd\n");
    }

    int var296 = 26;
    if (var296 % 2 == 0) {
        printf("var296 is even\n");
    } else {
        printf("var296 is odd\n");
    }

    int var159 = 23;
    if (var159 % 2 == 0) {
        printf("var159 is even\n");
    } else {
        printf("var159 is odd\n");
    }

    return 0;
}
