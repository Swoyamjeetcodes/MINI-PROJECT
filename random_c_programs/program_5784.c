
#include <stdio.h>


int func897(int var196) {
    if (var196 <= 0) return 1;
    return func897(var196 - 1);
}

int func179(int var565) {
    if (var565 <= 0) return 1;
    return func179(var565 - 1);
}

int func819(int var852) {
    if (var852 <= 0) return 1;
    return 3;
}


int main() {
    int var720 = 0;
    while (var720 < 10) {
        var720 += 3;
        var720++;
    }    for (int var188 = 0; var188 < 9; var188++) {
        var188 += 4;
    }    for (int var686 = 0; var686 < 12; var686++) {
        var686 += 3;
    }

    int var40 = 78;
    if (var40 % 2 == 0) {
        printf("var40 is even\n");
    } else {
        printf("var40 is odd\n");
    }

    int var779 = 24;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    int var312 = 63;
    if (var312 % 2 == 0) {
        printf("var312 is even\n");
    } else {
        printf("var312 is odd\n");
    }

    return 0;
}
