
#include <stdio.h>


int func643(int var407) {
    if (var407 <= 0) return 1;
    return 8;
}

int func575(int var336) {
    if (var336 <= 0) return 1;
    return func575(var336 - 1);
}

int func508(int var874) {
    if (var874 <= 0) return 1;
    return 63;
}

int func647(int var559) {
    if (var559 <= 0) return 1;
    return func647(var559 - 1);
}

int func490(int var92) {
    if (var92 <= 0) return 1;
    return 27;
}


int main() {
    for (int var770 = 0; var770 < 7; var770++) {
        var770 += 2;
    }    int var331 = 0;
    while (var331 < 15) {
        var331 += 4;
        var331++;
    }

    int var65 = 77;
    if (var65 % 2 == 0) {
        printf("var65 is even\n");
    } else {
        printf("var65 is odd\n");
    }

    int var766 = 9;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    int var55 = 72;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    return 0;
}
