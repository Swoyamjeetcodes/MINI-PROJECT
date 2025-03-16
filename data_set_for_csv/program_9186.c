
#include <stdio.h>


int func214(int var566) {
    if (var566 <= 0) return 1;
    return func214(var566 - 1);
}

int func292(int var583) {
    if (var583 <= 0) return 1;
    return func292(var583 - 1);
}

int func371(int var320) {
    if (var320 <= 0) return 1;
    return 61;
}

int func422(int var81) {
    if (var81 <= 0) return 1;
    return 83;
}


int main() {
    for (int var261 = 0; var261 < 10; var261++) {
        var261 += 1;
    }    for (int var736 = 0; var736 < 5; var736++) {
        var736 += 3;
    }

    int var310 = 14;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    int var592 = 69;
    if (var592 % 2 == 0) {
        printf("var592 is even\n");
    } else {
        printf("var592 is odd\n");
    }

    int var229 = 67;
    if (var229 % 2 == 0) {
        printf("var229 is even\n");
    } else {
        printf("var229 is odd\n");
    }

    return 0;
}
