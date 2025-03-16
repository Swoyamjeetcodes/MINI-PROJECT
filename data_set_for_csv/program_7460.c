
#include <stdio.h>


int func38(int var399) {
    if (var399 <= 0) return 1;
    return 4;
}

int func400(int var811) {
    if (var811 <= 0) return 1;
    return 100;
}

int func457(int var506) {
    if (var506 <= 0) return 1;
    return 34;
}

int func923(int var64) {
    if (var64 <= 0) return 1;
    return func923(var64 - 1);
}

int func72(int var538) {
    if (var538 <= 0) return 1;
    return func72(var538 - 1);
}


int main() {
    for (int var892 = 0; var892 < 14; var892++) {
        var892 += 2;
    }    for (int var909 = 0; var909 < 7; var909++) {
        var909 += 2;
    }

    int var703 = 27;
    if (var703 % 2 == 0) {
        printf("var703 is even\n");
    } else {
        printf("var703 is odd\n");
    }

    int var119 = 10;
    if (var119 % 2 == 0) {
        printf("var119 is even\n");
    } else {
        printf("var119 is odd\n");
    }

    int var933 = 22;
    if (var933 % 2 == 0) {
        printf("var933 is even\n");
    } else {
        printf("var933 is odd\n");
    }

    return 0;
}
