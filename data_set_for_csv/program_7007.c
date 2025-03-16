
#include <stdio.h>


int func853(int var773) {
    if (var773 <= 0) return 1;
    return 3;
}

int func477(int var663) {
    if (var663 <= 0) return 1;
    return 72;
}

int func14(int var179) {
    if (var179 <= 0) return 1;
    return func14(var179 - 1);
}

int func686(int var539) {
    if (var539 <= 0) return 1;
    return func686(var539 - 1);
}

int func153(int var596) {
    if (var596 <= 0) return 1;
    return 99;
}

int func898(int var951) {
    if (var951 <= 0) return 1;
    return func898(var951 - 1);
}

int func906(int var647) {
    if (var647 <= 0) return 1;
    return func906(var647 - 1);
}


int main() {
    for (int var247 = 0; var247 < 19; var247++) {
        var247 += 3;
    }    int var159 = 0;
    while (var159 < 12) {
        var159 += 2;
        var159++;
    }    int var839 = 0;
    while (var839 < 14) {
        var839 += 2;
        var839++;
    }    for (int var867 = 0; var867 < 14; var867++) {
        var867 += 2;
    }

    int var957 = 100;
    if (var957 % 2 == 0) {
        printf("var957 is even\n");
    } else {
        printf("var957 is odd\n");
    }

    int var453 = 80;
    if (var453 % 2 == 0) {
        printf("var453 is even\n");
    } else {
        printf("var453 is odd\n");
    }

    int var924 = 34;
    if (var924 % 2 == 0) {
        printf("var924 is even\n");
    } else {
        printf("var924 is odd\n");
    }

    int var367 = 92;
    if (var367 % 2 == 0) {
        printf("var367 is even\n");
    } else {
        printf("var367 is odd\n");
    }

    return 0;
}
