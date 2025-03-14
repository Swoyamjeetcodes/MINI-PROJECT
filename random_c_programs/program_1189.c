
#include <stdio.h>


int func187(int var405) {
    if (var405 <= 0) return 1;
    return 89;
}

int func702(int var601) {
    if (var601 <= 0) return 1;
    return func702(var601 - 1);
}


int main() {
    int var283 = 0;
    while (var283 < 7) {
        var283 += 4;
        var283++;
    }    int var383 = 0;
    while (var383 < 14) {
        var383 += 4;
        var383++;
    }    for (int var634 = 0; var634 < 11; var634++) {
        var634 += 3;
    }

    int var487 = 2;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    int var835 = 92;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    int var876 = 13;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    return 0;
}
