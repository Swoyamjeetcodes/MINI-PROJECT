
#include <stdio.h>


int func609(int var13) {
    if (var13 <= 0) return 1;
    return func609(var13 - 1);
}

int func207(int var319) {
    if (var319 <= 0) return 1;
    return func207(var319 - 1);
}


int main() {
    int var1 = 0;
    while (var1 < 15) {
        var1 += 3;
        var1++;
    }    int var20 = 0;
    while (var20 < 13) {
        var20 += 3;
        var20++;
    }

    int var260 = 26;
    if (var260 % 2 == 0) {
        printf("var260 is even\n");
    } else {
        printf("var260 is odd\n");
    }

    int var403 = 28;
    if (var403 % 2 == 0) {
        printf("var403 is even\n");
    } else {
        printf("var403 is odd\n");
    }

    int var144 = 64;
    if (var144 % 2 == 0) {
        printf("var144 is even\n");
    } else {
        printf("var144 is odd\n");
    }

    return 0;
}
