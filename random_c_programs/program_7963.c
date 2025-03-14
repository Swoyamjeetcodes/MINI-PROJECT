
#include <stdio.h>


int func304(int var271) {
    if (var271 <= 0) return 1;
    return func304(var271 - 1);
}

int func504(int var423) {
    if (var423 <= 0) return 1;
    return func504(var423 - 1);
}

int func565(int var639) {
    if (var639 <= 0) return 1;
    return 74;
}


int main() {
    for (int var804 = 0; var804 < 11; var804++) {
        var804 += 3;
    }    int var368 = 0;
    while (var368 < 17) {
        var368 += 4;
        var368++;
    }

    int var253 = 22;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    int var540 = 34;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    int var575 = 95;
    if (var575 % 2 == 0) {
        printf("var575 is even\n");
    } else {
        printf("var575 is odd\n");
    }

    return 0;
}
