
#include <stdio.h>


int func943(int var876) {
    if (var876 <= 0) return 1;
    return func943(var876 - 1);
}

int func142(int var408) {
    if (var408 <= 0) return 1;
    return 64;
}

int func809(int var292) {
    if (var292 <= 0) return 1;
    return func809(var292 - 1);
}


int main() {
    int var658 = 0;
    while (var658 < 18) {
        var658 += 2;
        var658++;
    }

    int var44 = 90;
    if (var44 % 2 == 0) {
        printf("var44 is even\n");
    } else {
        printf("var44 is odd\n");
    }

    int var728 = 67;
    if (var728 % 2 == 0) {
        printf("var728 is even\n");
    } else {
        printf("var728 is odd\n");
    }

    int var685 = 15;
    if (var685 % 2 == 0) {
        printf("var685 is even\n");
    } else {
        printf("var685 is odd\n");
    }

    return 0;
}
