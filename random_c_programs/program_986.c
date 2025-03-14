
#include <stdio.h>


int func770(int var356) {
    if (var356 <= 0) return 1;
    return func770(var356 - 1);
}

int func277(int var149) {
    if (var149 <= 0) return 1;
    return func277(var149 - 1);
}

int func851(int var562) {
    if (var562 <= 0) return 1;
    return func851(var562 - 1);
}


int main() {
    for (int var12 = 0; var12 < 14; var12++) {
        var12 += 4;
    }    int var549 = 0;
    while (var549 < 16) {
        var549 += 5;
        var549++;
    }    for (int var181 = 0; var181 < 15; var181++) {
        var181 += 5;
    }

    int var444 = 13;
    if (var444 % 2 == 0) {
        printf("var444 is even\n");
    } else {
        printf("var444 is odd\n");
    }

    int var477 = 3;
    if (var477 % 2 == 0) {
        printf("var477 is even\n");
    } else {
        printf("var477 is odd\n");
    }

    int var818 = 92;
    if (var818 % 2 == 0) {
        printf("var818 is even\n");
    } else {
        printf("var818 is odd\n");
    }

    return 0;
}
