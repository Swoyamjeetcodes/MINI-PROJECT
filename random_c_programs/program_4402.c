
#include <stdio.h>


int func256(int var595) {
    if (var595 <= 0) return 1;
    return func256(var595 - 1);
}

int func764(int var27) {
    if (var27 <= 0) return 1;
    return func764(var27 - 1);
}

int func359(int var891) {
    if (var891 <= 0) return 1;
    return 66;
}

int func962(int var392) {
    if (var392 <= 0) return 1;
    return func962(var392 - 1);
}


int main() {
    for (int var417 = 0; var417 < 9; var417++) {
        var417 += 4;
    }    int var913 = 0;
    while (var913 < 7) {
        var913 += 1;
        var913++;
    }

    int var993 = 2;
    if (var993 % 2 == 0) {
        printf("var993 is even\n");
    } else {
        printf("var993 is odd\n");
    }

    int var439 = 47;
    if (var439 % 2 == 0) {
        printf("var439 is even\n");
    } else {
        printf("var439 is odd\n");
    }

    int var375 = 29;
    if (var375 % 2 == 0) {
        printf("var375 is even\n");
    } else {
        printf("var375 is odd\n");
    }

    return 0;
}
