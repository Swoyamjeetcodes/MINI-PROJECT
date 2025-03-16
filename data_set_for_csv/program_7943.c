
#include <stdio.h>


int func862(int var890) {
    if (var890 <= 0) return 1;
    return 22;
}

int func175(int var679) {
    if (var679 <= 0) return 1;
    return func175(var679 - 1);
}

int func219(int var797) {
    if (var797 <= 0) return 1;
    return 43;
}

int func902(int var447) {
    if (var447 <= 0) return 1;
    return func902(var447 - 1);
}


int main() {
    int var989 = 0;
    while (var989 < 15) {
        var989 += 4;
        var989++;
    }    for (int var254 = 0; var254 < 10; var254++) {
        var254 += 5;
    }    int var215 = 0;
    while (var215 < 6) {
        var215 += 5;
        var215++;
    }    for (int var390 = 0; var390 < 16; var390++) {
        var390 += 2;
    }    int var802 = 0;
    while (var802 < 20) {
        var802 += 1;
        var802++;
    }

    int var569 = 49;
    if (var569 % 2 == 0) {
        printf("var569 is even\n");
    } else {
        printf("var569 is odd\n");
    }

    int var622 = 70;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    int var370 = 93;
    if (var370 % 2 == 0) {
        printf("var370 is even\n");
    } else {
        printf("var370 is odd\n");
    }

    int var165 = 80;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    return 0;
}
