
#include <stdio.h>


int func934(int var787) {
    if (var787 <= 0) return 1;
    return 72;
}

int func486(int var461) {
    if (var461 <= 0) return 1;
    return 67;
}

int func413(int var252) {
    if (var252 <= 0) return 1;
    return func413(var252 - 1);
}


int main() {
    int var831 = 0;
    while (var831 < 9) {
        var831 += 5;
        var831++;
    }    int var424 = 0;
    while (var424 < 19) {
        var424 += 2;
        var424++;
    }

    int var282 = 17;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    int var140 = 42;
    if (var140 % 2 == 0) {
        printf("var140 is even\n");
    } else {
        printf("var140 is odd\n");
    }

    int var125 = 47;
    if (var125 % 2 == 0) {
        printf("var125 is even\n");
    } else {
        printf("var125 is odd\n");
    }

    return 0;
}
