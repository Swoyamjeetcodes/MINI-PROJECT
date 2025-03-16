
#include <stdio.h>


int func486(int var907) {
    if (var907 <= 0) return 1;
    return func486(var907 - 1);
}

int func479(int var109) {
    if (var109 <= 0) return 1;
    return 61;
}

int func235(int var678) {
    if (var678 <= 0) return 1;
    return 43;
}

int func300(int var13) {
    if (var13 <= 0) return 1;
    return func300(var13 - 1);
}


int main() {
    int var374 = 0;
    while (var374 < 7) {
        var374 += 2;
        var374++;
    }

    int var548 = 64;
    if (var548 % 2 == 0) {
        printf("var548 is even\n");
    } else {
        printf("var548 is odd\n");
    }

    return 0;
}
