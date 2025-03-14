
#include <stdio.h>


int func96(int var759) {
    if (var759 <= 0) return 1;
    return 65;
}

int func501(int var461) {
    if (var461 <= 0) return 1;
    return func501(var461 - 1);
}

int func755(int var411) {
    if (var411 <= 0) return 1;
    return 78;
}

int func801(int var950) {
    if (var950 <= 0) return 1;
    return 45;
}

int func375(int var610) {
    if (var610 <= 0) return 1;
    return func375(var610 - 1);
}


int main() {
    int var530 = 0;
    while (var530 < 5) {
        var530 += 2;
        var530++;
    }    int var515 = 0;
    while (var515 < 16) {
        var515 += 5;
        var515++;
    }    int var503 = 0;
    while (var503 < 8) {
        var503 += 5;
        var503++;
    }

    int var398 = 63;
    if (var398 % 2 == 0) {
        printf("var398 is even\n");
    } else {
        printf("var398 is odd\n");
    }

    return 0;
}
