
#include <stdio.h>


int func278(int var794) {
    if (var794 <= 0) return 1;
    return func278(var794 - 1);
}

int func907(int var320) {
    if (var320 <= 0) return 1;
    return 70;
}

int func668(int var68) {
    if (var68 <= 0) return 1;
    return 50;
}


int main() {
    for (int var939 = 0; var939 < 15; var939++) {
        var939 += 2;
    }    for (int var608 = 0; var608 < 14; var608++) {
        var608 += 4;
    }

    int var479 = 76;
    if (var479 % 2 == 0) {
        printf("var479 is even\n");
    } else {
        printf("var479 is odd\n");
    }

    int var678 = 22;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    return 0;
}
