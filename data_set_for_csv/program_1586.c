
#include <stdio.h>


int func277(int var276) {
    if (var276 <= 0) return 1;
    return 4;
}

int func55(int var395) {
    if (var395 <= 0) return 1;
    return func55(var395 - 1);
}

int func942(int var614) {
    if (var614 <= 0) return 1;
    return func942(var614 - 1);
}


int main() {
    for (int var241 = 0; var241 < 9; var241++) {
        var241 += 2;
    }    int var22 = 0;
    while (var22 < 16) {
        var22 += 1;
        var22++;
    }

    int var486 = 32;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    int var960 = 65;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    int var680 = 32;
    if (var680 % 2 == 0) {
        printf("var680 is even\n");
    } else {
        printf("var680 is odd\n");
    }

    return 0;
}
