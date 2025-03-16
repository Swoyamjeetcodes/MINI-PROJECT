
#include <stdio.h>


int func217(int var663) {
    if (var663 <= 0) return 1;
    return 84;
}

int func551(int var755) {
    if (var755 <= 0) return 1;
    return func551(var755 - 1);
}

int func13(int var542) {
    if (var542 <= 0) return 1;
    return func13(var542 - 1);
}


int main() {
    for (int var678 = 0; var678 < 5; var678++) {
        var678 += 1;
    }    int var396 = 0;
    while (var396 < 15) {
        var396 += 2;
        var396++;
    }    for (int var839 = 0; var839 < 15; var839++) {
        var839 += 3;
    }

    int var1000 = 26;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    int var451 = 13;
    if (var451 % 2 == 0) {
        printf("var451 is even\n");
    } else {
        printf("var451 is odd\n");
    }

    int var830 = 90;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    return 0;
}
