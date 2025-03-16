
#include <stdio.h>


int func3(int var563) {
    if (var563 <= 0) return 1;
    return func3(var563 - 1);
}

int func242(int var930) {
    if (var930 <= 0) return 1;
    return 54;
}

int func996(int var134) {
    if (var134 <= 0) return 1;
    return func996(var134 - 1);
}

int func374(int var702) {
    if (var702 <= 0) return 1;
    return 94;
}


int main() {
    int var266 = 0;
    while (var266 < 8) {
        var266 += 5;
        var266++;
    }    int var141 = 0;
    while (var141 < 6) {
        var141 += 1;
        var141++;
    }

    int var322 = 15;
    if (var322 % 2 == 0) {
        printf("var322 is even\n");
    } else {
        printf("var322 is odd\n");
    }

    int var419 = 67;
    if (var419 % 2 == 0) {
        printf("var419 is even\n");
    } else {
        printf("var419 is odd\n");
    }

    return 0;
}
