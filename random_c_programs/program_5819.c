
#include <stdio.h>


int func985(int var186) {
    if (var186 <= 0) return 1;
    return func985(var186 - 1);
}

int func369(int var66) {
    if (var66 <= 0) return 1;
    return 62;
}

int func385(int var149) {
    if (var149 <= 0) return 1;
    return 43;
}

int func581(int var18) {
    if (var18 <= 0) return 1;
    return 97;
}


int main() {
    int var661 = 0;
    while (var661 < 14) {
        var661 += 2;
        var661++;
    }

    int var93 = 6;
    if (var93 % 2 == 0) {
        printf("var93 is even\n");
    } else {
        printf("var93 is odd\n");
    }

    int var766 = 52;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    int var170 = 91;
    if (var170 % 2 == 0) {
        printf("var170 is even\n");
    } else {
        printf("var170 is odd\n");
    }

    return 0;
}
