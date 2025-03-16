
#include <stdio.h>


int func923(int var332) {
    if (var332 <= 0) return 1;
    return 56;
}

int func574(int var504) {
    if (var504 <= 0) return 1;
    return 48;
}

int func169(int var746) {
    if (var746 <= 0) return 1;
    return 18;
}

int func83(int var760) {
    if (var760 <= 0) return 1;
    return func83(var760 - 1);
}

int func785(int var380) {
    if (var380 <= 0) return 1;
    return func785(var380 - 1);
}


int main() {
    for (int var307 = 0; var307 < 17; var307++) {
        var307 += 3;
    }

    int var25 = 48;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    int var974 = 33;
    if (var974 % 2 == 0) {
        printf("var974 is even\n");
    } else {
        printf("var974 is odd\n");
    }

    return 0;
}
