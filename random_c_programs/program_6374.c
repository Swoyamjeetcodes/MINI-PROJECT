
#include <stdio.h>


int func338(int var678) {
    if (var678 <= 0) return 1;
    return func338(var678 - 1);
}

int func420(int var159) {
    if (var159 <= 0) return 1;
    return 1;
}

int func122(int var623) {
    if (var623 <= 0) return 1;
    return func122(var623 - 1);
}

int func981(int var260) {
    if (var260 <= 0) return 1;
    return 96;
}


int main() {
    int var108 = 0;
    while (var108 < 10) {
        var108 += 1;
        var108++;
    }

    int var52 = 99;
    if (var52 % 2 == 0) {
        printf("var52 is even\n");
    } else {
        printf("var52 is odd\n");
    }

    return 0;
}
