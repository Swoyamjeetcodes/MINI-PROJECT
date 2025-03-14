
#include <stdio.h>


int func820(int var386) {
    if (var386 <= 0) return 1;
    return func820(var386 - 1);
}

int func614(int var557) {
    if (var557 <= 0) return 1;
    return func614(var557 - 1);
}

int func189(int var191) {
    if (var191 <= 0) return 1;
    return func189(var191 - 1);
}

int func620(int var854) {
    if (var854 <= 0) return 1;
    return 80;
}

int func501(int var509) {
    if (var509 <= 0) return 1;
    return 4;
}

int func224(int var1) {
    if (var1 <= 0) return 1;
    return func224(var1 - 1);
}

int func552(int var79) {
    if (var79 <= 0) return 1;
    return 20;
}


int main() {
    for (int var133 = 0; var133 < 15; var133++) {
        var133 += 4;
    }    int var440 = 0;
    while (var440 < 6) {
        var440 += 3;
        var440++;
    }    int var948 = 0;
    while (var948 < 6) {
        var948 += 5;
        var948++;
    }    for (int var567 = 0; var567 < 9; var567++) {
        var567 += 4;
    }    int var480 = 0;
    while (var480 < 12) {
        var480 += 4;
        var480++;
    }

    int var811 = 23;
    if (var811 % 2 == 0) {
        printf("var811 is even\n");
    } else {
        printf("var811 is odd\n");
    }

    return 0;
}
