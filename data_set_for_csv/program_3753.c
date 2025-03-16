
#include <stdio.h>


int func663(int var271) {
    if (var271 <= 0) return 1;
    return func663(var271 - 1);
}

int func728(int var319) {
    if (var319 <= 0) return 1;
    return 28;
}

int func694(int var899) {
    if (var899 <= 0) return 1;
    return 79;
}


int main() {
    for (int var867 = 0; var867 < 20; var867++) {
        var867 += 2;
    }    for (int var545 = 0; var545 < 14; var545++) {
        var545 += 3;
    }    int var118 = 0;
    while (var118 < 15) {
        var118 += 3;
        var118++;
    }

    int var920 = 60;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    int var739 = 52;
    if (var739 % 2 == 0) {
        printf("var739 is even\n");
    } else {
        printf("var739 is odd\n");
    }

    int var682 = 85;
    if (var682 % 2 == 0) {
        printf("var682 is even\n");
    } else {
        printf("var682 is odd\n");
    }

    return 0;
}
