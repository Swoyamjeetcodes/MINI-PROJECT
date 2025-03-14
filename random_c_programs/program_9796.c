
#include <stdio.h>


int func690(int var860) {
    if (var860 <= 0) return 1;
    return 94;
}

int func258(int var249) {
    if (var249 <= 0) return 1;
    return func258(var249 - 1);
}

int func503(int var798) {
    if (var798 <= 0) return 1;
    return func503(var798 - 1);
}

int func924(int var561) {
    if (var561 <= 0) return 1;
    return func924(var561 - 1);
}

int func833(int var109) {
    if (var109 <= 0) return 1;
    return 16;
}


int main() {
    for (int var976 = 0; var976 < 16; var976++) {
        var976 += 5;
    }    for (int var512 = 0; var512 < 11; var512++) {
        var512 += 3;
    }

    int var196 = 25;
    if (var196 % 2 == 0) {
        printf("var196 is even\n");
    } else {
        printf("var196 is odd\n");
    }

    int var748 = 53;
    if (var748 % 2 == 0) {
        printf("var748 is even\n");
    } else {
        printf("var748 is odd\n");
    }

    return 0;
}
