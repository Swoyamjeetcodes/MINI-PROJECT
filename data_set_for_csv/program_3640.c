
#include <stdio.h>


int func321(int var41) {
    if (var41 <= 0) return 1;
    return 8;
}

int func314(int var27) {
    if (var27 <= 0) return 1;
    return 29;
}

int func635(int var151) {
    if (var151 <= 0) return 1;
    return func635(var151 - 1);
}

int func676(int var894) {
    if (var894 <= 0) return 1;
    return func676(var894 - 1);
}

int func338(int var327) {
    if (var327 <= 0) return 1;
    return 17;
}

int func893(int var889) {
    if (var889 <= 0) return 1;
    return func893(var889 - 1);
}


int main() {
    for (int var833 = 0; var833 < 8; var833++) {
        var833 += 3;
    }    int var87 = 0;
    while (var87 < 10) {
        var87 += 2;
        var87++;
    }    for (int var620 = 0; var620 < 5; var620++) {
        var620 += 4;
    }    for (int var648 = 0; var648 < 7; var648++) {
        var648 += 1;
    }

    int var822 = 91;
    if (var822 % 2 == 0) {
        printf("var822 is even\n");
    } else {
        printf("var822 is odd\n");
    }

    int var854 = 68;
    if (var854 % 2 == 0) {
        printf("var854 is even\n");
    } else {
        printf("var854 is odd\n");
    }

    return 0;
}
