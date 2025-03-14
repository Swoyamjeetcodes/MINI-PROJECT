
#include <stdio.h>


int func513(int var609) {
    if (var609 <= 0) return 1;
    return 33;
}

int func616(int var756) {
    if (var756 <= 0) return 1;
    return func616(var756 - 1);
}

int func221(int var936) {
    if (var936 <= 0) return 1;
    return func221(var936 - 1);
}

int func745(int var802) {
    if (var802 <= 0) return 1;
    return func745(var802 - 1);
}

int func731(int var495) {
    if (var495 <= 0) return 1;
    return func731(var495 - 1);
}

int func57(int var683) {
    if (var683 <= 0) return 1;
    return func57(var683 - 1);
}


int main() {
    int var363 = 0;
    while (var363 < 18) {
        var363 += 4;
        var363++;
    }    int var17 = 0;
    while (var17 < 20) {
        var17 += 5;
        var17++;
    }    for (int var110 = 0; var110 < 17; var110++) {
        var110 += 5;
    }    int var805 = 0;
    while (var805 < 8) {
        var805 += 2;
        var805++;
    }

    int var272 = 5;
    if (var272 % 2 == 0) {
        printf("var272 is even\n");
    } else {
        printf("var272 is odd\n");
    }

    return 0;
}
