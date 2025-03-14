
#include <stdio.h>


int func506(int var315) {
    if (var315 <= 0) return 1;
    return 15;
}

int func685(int var689) {
    if (var689 <= 0) return 1;
    return 86;
}

int func251(int var979) {
    if (var979 <= 0) return 1;
    return func251(var979 - 1);
}

int func593(int var774) {
    if (var774 <= 0) return 1;
    return func593(var774 - 1);
}


int main() {
    int var71 = 0;
    while (var71 < 11) {
        var71 += 5;
        var71++;
    }    for (int var831 = 0; var831 < 7; var831++) {
        var831 += 1;
    }

    int var249 = 34;
    if (var249 % 2 == 0) {
        printf("var249 is even\n");
    } else {
        printf("var249 is odd\n");
    }

    int var439 = 40;
    if (var439 % 2 == 0) {
        printf("var439 is even\n");
    } else {
        printf("var439 is odd\n");
    }

    return 0;
}
