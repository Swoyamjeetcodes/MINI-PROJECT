
#include <stdio.h>


int func539(int var240) {
    if (var240 <= 0) return 1;
    return func539(var240 - 1);
}

int func179(int var438) {
    if (var438 <= 0) return 1;
    return func179(var438 - 1);
}

int func797(int var446) {
    if (var446 <= 0) return 1;
    return func797(var446 - 1);
}

int func759(int var761) {
    if (var761 <= 0) return 1;
    return 73;
}

int func443(int var942) {
    if (var942 <= 0) return 1;
    return func443(var942 - 1);
}


int main() {
    for (int var112 = 0; var112 < 10; var112++) {
        var112 += 3;
    }    for (int var100 = 0; var100 < 10; var100++) {
        var100 += 5;
    }    for (int var656 = 0; var656 < 7; var656++) {
        var656 += 4;
    }

    int var315 = 87;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    return 0;
}
