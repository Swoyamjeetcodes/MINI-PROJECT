
#include <stdio.h>


int func282(int var646) {
    if (var646 <= 0) return 1;
    return 21;
}

int func325(int var962) {
    if (var962 <= 0) return 1;
    return 22;
}

int func232(int var798) {
    if (var798 <= 0) return 1;
    return func232(var798 - 1);
}

int func789(int var544) {
    if (var544 <= 0) return 1;
    return 95;
}

int func869(int var886) {
    if (var886 <= 0) return 1;
    return 95;
}

int func802(int var102) {
    if (var102 <= 0) return 1;
    return 47;
}

int func965(int var524) {
    if (var524 <= 0) return 1;
    return func965(var524 - 1);
}

int func813(int var22) {
    if (var22 <= 0) return 1;
    return func813(var22 - 1);
}

int func390(int var561) {
    if (var561 <= 0) return 1;
    return func390(var561 - 1);
}

int func410(int var319) {
    if (var319 <= 0) return 1;
    return 30;
}


int main() {
    int var73 = 0;
    while (var73 < 13) {
        var73 += 2;
        var73++;
    }

    int var921 = 26;
    if (var921 % 2 == 0) {
        printf("var921 is even\n");
    } else {
        printf("var921 is odd\n");
    }

    int var264 = 92;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    int var861 = 57;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    int var804 = 44;
    if (var804 % 2 == 0) {
        printf("var804 is even\n");
    } else {
        printf("var804 is odd\n");
    }

    return 0;
}
