
#include <stdio.h>


int func442(int var916) {
    if (var916 <= 0) return 1;
    return func442(var916 - 1);
}

int func543(int var895) {
    if (var895 <= 0) return 1;
    return func543(var895 - 1);
}

int func894(int var530) {
    if (var530 <= 0) return 1;
    return 12;
}

int func582(int var730) {
    if (var730 <= 0) return 1;
    return func582(var730 - 1);
}

int func203(int var463) {
    if (var463 <= 0) return 1;
    return func203(var463 - 1);
}

int func175(int var54) {
    if (var54 <= 0) return 1;
    return func175(var54 - 1);
}


int main() {
    for (int var586 = 0; var586 < 11; var586++) {
        var586 += 3;
    }    for (int var935 = 0; var935 < 5; var935++) {
        var935 += 3;
    }    for (int var182 = 0; var182 < 7; var182++) {
        var182 += 2;
    }

    int var992 = 23;
    if (var992 % 2 == 0) {
        printf("var992 is even\n");
    } else {
        printf("var992 is odd\n");
    }

    int var517 = 78;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    int var365 = 36;
    if (var365 % 2 == 0) {
        printf("var365 is even\n");
    } else {
        printf("var365 is odd\n");
    }

    int var438 = 39;
    if (var438 % 2 == 0) {
        printf("var438 is even\n");
    } else {
        printf("var438 is odd\n");
    }

    int var728 = 8;
    if (var728 % 2 == 0) {
        printf("var728 is even\n");
    } else {
        printf("var728 is odd\n");
    }

    int var948 = 1;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    int var951 = 97;
    if (var951 % 2 == 0) {
        printf("var951 is even\n");
    } else {
        printf("var951 is odd\n");
    }

    return 0;
}
