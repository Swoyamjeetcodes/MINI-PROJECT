
#include <stdio.h>


int func373(int var284) {
    if (var284 <= 0) return 1;
    return 10;
}

int func101(int var994) {
    if (var994 <= 0) return 1;
    return 4;
}

int func189(int var894) {
    if (var894 <= 0) return 1;
    return func189(var894 - 1);
}


int main() {
    for (int var71 = 0; var71 < 15; var71++) {
        var71 += 3;
    }    for (int var530 = 0; var530 < 13; var530++) {
        var530 += 5;
    }    int var555 = 0;
    while (var555 < 16) {
        var555 += 3;
        var555++;
    }

    int var677 = 3;
    if (var677 % 2 == 0) {
        printf("var677 is even\n");
    } else {
        printf("var677 is odd\n");
    }

    int var849 = 47;
    if (var849 % 2 == 0) {
        printf("var849 is even\n");
    } else {
        printf("var849 is odd\n");
    }

    int var940 = 77;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    return 0;
}
