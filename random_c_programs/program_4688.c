
#include <stdio.h>


int func891(int var626) {
    if (var626 <= 0) return 1;
    return 75;
}

int func628(int var887) {
    if (var887 <= 0) return 1;
    return func628(var887 - 1);
}

int func645(int var894) {
    if (var894 <= 0) return 1;
    return func645(var894 - 1);
}

int func21(int var300) {
    if (var300 <= 0) return 1;
    return func21(var300 - 1);
}


int main() {
    for (int var620 = 0; var620 < 5; var620++) {
        var620 += 3;
    }    int var819 = 0;
    while (var819 < 13) {
        var819 += 4;
        var819++;
    }    for (int var807 = 0; var807 < 10; var807++) {
        var807 += 2;
    }

    int var691 = 33;
    if (var691 % 2 == 0) {
        printf("var691 is even\n");
    } else {
        printf("var691 is odd\n");
    }

    int var808 = 30;
    if (var808 % 2 == 0) {
        printf("var808 is even\n");
    } else {
        printf("var808 is odd\n");
    }

    int var886 = 65;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    return 0;
}
