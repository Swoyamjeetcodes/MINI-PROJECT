
#include <stdio.h>


int func103(int var673) {
    if (var673 <= 0) return 1;
    return func103(var673 - 1);
}

int func273(int var891) {
    if (var891 <= 0) return 1;
    return 64;
}

int func932(int var266) {
    if (var266 <= 0) return 1;
    return 32;
}

int func662(int var72) {
    if (var72 <= 0) return 1;
    return func662(var72 - 1);
}

int func726(int var332) {
    if (var332 <= 0) return 1;
    return func726(var332 - 1);
}


int main() {
    int var807 = 0;
    while (var807 < 18) {
        var807 += 3;
        var807++;
    }    for (int var259 = 0; var259 < 11; var259++) {
        var259 += 2;
    }    for (int var963 = 0; var963 < 19; var963++) {
        var963 += 4;
    }

    int var811 = 87;
    if (var811 % 2 == 0) {
        printf("var811 is even\n");
    } else {
        printf("var811 is odd\n");
    }

    int var671 = 5;
    if (var671 % 2 == 0) {
        printf("var671 is even\n");
    } else {
        printf("var671 is odd\n");
    }

    int var697 = 47;
    if (var697 % 2 == 0) {
        printf("var697 is even\n");
    } else {
        printf("var697 is odd\n");
    }

    int var277 = 100;
    if (var277 % 2 == 0) {
        printf("var277 is even\n");
    } else {
        printf("var277 is odd\n");
    }

    return 0;
}
