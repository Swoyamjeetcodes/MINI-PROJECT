
#include <stdio.h>


int func166(int var571) {
    if (var571 <= 0) return 1;
    return func166(var571 - 1);
}

int func389(int var843) {
    if (var843 <= 0) return 1;
    return 17;
}

int func751(int var76) {
    if (var76 <= 0) return 1;
    return func751(var76 - 1);
}

int func540(int var958) {
    if (var958 <= 0) return 1;
    return func540(var958 - 1);
}

int func213(int var452) {
    if (var452 <= 0) return 1;
    return 37;
}


int main() {
    for (int var922 = 0; var922 < 14; var922++) {
        var922 += 4;
    }    for (int var527 = 0; var527 < 17; var527++) {
        var527 += 1;
    }    int var650 = 0;
    while (var650 < 11) {
        var650 += 4;
        var650++;
    }

    int var511 = 84;
    if (var511 % 2 == 0) {
        printf("var511 is even\n");
    } else {
        printf("var511 is odd\n");
    }

    return 0;
}
