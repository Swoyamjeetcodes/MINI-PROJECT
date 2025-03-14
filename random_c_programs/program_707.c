
#include <stdio.h>


int func89(int var584) {
    if (var584 <= 0) return 1;
    return func89(var584 - 1);
}

int func830(int var904) {
    if (var904 <= 0) return 1;
    return func830(var904 - 1);
}

int func97(int var148) {
    if (var148 <= 0) return 1;
    return func97(var148 - 1);
}

int func865(int var178) {
    if (var178 <= 0) return 1;
    return func865(var178 - 1);
}


int main() {
    int var823 = 0;
    while (var823 < 9) {
        var823 += 3;
        var823++;
    }    int var701 = 0;
    while (var701 < 7) {
        var701 += 2;
        var701++;
    }

    int var933 = 13;
    if (var933 % 2 == 0) {
        printf("var933 is even\n");
    } else {
        printf("var933 is odd\n");
    }

    int var958 = 55;
    if (var958 % 2 == 0) {
        printf("var958 is even\n");
    } else {
        printf("var958 is odd\n");
    }

    int var48 = 94;
    if (var48 % 2 == 0) {
        printf("var48 is even\n");
    } else {
        printf("var48 is odd\n");
    }

    return 0;
}
