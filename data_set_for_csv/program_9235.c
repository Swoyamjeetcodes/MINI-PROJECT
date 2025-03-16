
#include <stdio.h>


int func758(int var926) {
    if (var926 <= 0) return 1;
    return 46;
}

int func766(int var628) {
    if (var628 <= 0) return 1;
    return func766(var628 - 1);
}

int func833(int var312) {
    if (var312 <= 0) return 1;
    return func833(var312 - 1);
}

int func717(int var907) {
    if (var907 <= 0) return 1;
    return func717(var907 - 1);
}


int main() {
    for (int var136 = 0; var136 < 7; var136++) {
        var136 += 4;
    }

    int var64 = 71;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    int var546 = 58;
    if (var546 % 2 == 0) {
        printf("var546 is even\n");
    } else {
        printf("var546 is odd\n");
    }

    int var16 = 25;
    if (var16 % 2 == 0) {
        printf("var16 is even\n");
    } else {
        printf("var16 is odd\n");
    }

    return 0;
}
