
#include <stdio.h>


int func540(int var855) {
    if (var855 <= 0) return 1;
    return 47;
}

int func809(int var902) {
    if (var902 <= 0) return 1;
    return 39;
}

int func628(int var154) {
    if (var154 <= 0) return 1;
    return func628(var154 - 1);
}

int func300(int var768) {
    if (var768 <= 0) return 1;
    return func300(var768 - 1);
}

int func422(int var452) {
    if (var452 <= 0) return 1;
    return func422(var452 - 1);
}

int func506(int var473) {
    if (var473 <= 0) return 1;
    return func506(var473 - 1);
}

int func77(int var917) {
    if (var917 <= 0) return 1;
    return 99;
}


int main() {
    int var364 = 0;
    while (var364 < 8) {
        var364 += 1;
        var364++;
    }    int var903 = 0;
    while (var903 < 20) {
        var903 += 3;
        var903++;
    }

    int var206 = 3;
    if (var206 % 2 == 0) {
        printf("var206 is even\n");
    } else {
        printf("var206 is odd\n");
    }

    int var465 = 1;
    if (var465 % 2 == 0) {
        printf("var465 is even\n");
    } else {
        printf("var465 is odd\n");
    }

    int var94 = 81;
    if (var94 % 2 == 0) {
        printf("var94 is even\n");
    } else {
        printf("var94 is odd\n");
    }

    return 0;
}
