
#include <stdio.h>


int func519(int var52) {
    if (var52 <= 0) return 1;
    return func519(var52 - 1);
}

int func722(int var186) {
    if (var186 <= 0) return 1;
    return func722(var186 - 1);
}


int main() {
    for (int var648 = 0; var648 < 17; var648++) {
        var648 += 5;
    }    int var353 = 0;
    while (var353 < 13) {
        var353 += 3;
        var353++;
    }

    int var980 = 37;
    if (var980 % 2 == 0) {
        printf("var980 is even\n");
    } else {
        printf("var980 is odd\n");
    }

    int var476 = 70;
    if (var476 % 2 == 0) {
        printf("var476 is even\n");
    } else {
        printf("var476 is odd\n");
    }

    int var422 = 92;
    if (var422 % 2 == 0) {
        printf("var422 is even\n");
    } else {
        printf("var422 is odd\n");
    }

    return 0;
}
