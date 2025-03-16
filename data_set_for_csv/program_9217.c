
#include <stdio.h>


int func831(int var622) {
    if (var622 <= 0) return 1;
    return func831(var622 - 1);
}

int func787(int var636) {
    if (var636 <= 0) return 1;
    return 8;
}

int func190(int var825) {
    if (var825 <= 0) return 1;
    return 74;
}

int func431(int var250) {
    if (var250 <= 0) return 1;
    return 10;
}

int func409(int var922) {
    if (var922 <= 0) return 1;
    return 27;
}


int main() {
    for (int var828 = 0; var828 < 17; var828++) {
        var828 += 3;
    }    for (int var699 = 0; var699 < 19; var699++) {
        var699 += 5;
    }    int var868 = 0;
    while (var868 < 20) {
        var868 += 5;
        var868++;
    }    for (int var527 = 0; var527 < 12; var527++) {
        var527 += 2;
    }

    int var376 = 67;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    int var270 = 43;
    if (var270 % 2 == 0) {
        printf("var270 is even\n");
    } else {
        printf("var270 is odd\n");
    }

    int var73 = 98;
    if (var73 % 2 == 0) {
        printf("var73 is even\n");
    } else {
        printf("var73 is odd\n");
    }

    int var938 = 28;
    if (var938 % 2 == 0) {
        printf("var938 is even\n");
    } else {
        printf("var938 is odd\n");
    }

    return 0;
}
