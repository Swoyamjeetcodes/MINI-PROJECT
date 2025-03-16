
#include <stdio.h>


int func254(int var668) {
    if (var668 <= 0) return 1;
    return 11;
}

int func196(int var965) {
    if (var965 <= 0) return 1;
    return func196(var965 - 1);
}

int func755(int var441) {
    if (var441 <= 0) return 1;
    return func755(var441 - 1);
}


int main() {
    int var823 = 0;
    while (var823 < 18) {
        var823 += 1;
        var823++;
    }    for (int var822 = 0; var822 < 19; var822++) {
        var822 += 4;
    }    int var716 = 0;
    while (var716 < 18) {
        var716 += 3;
        var716++;
    }

    int var912 = 81;
    if (var912 % 2 == 0) {
        printf("var912 is even\n");
    } else {
        printf("var912 is odd\n");
    }

    int var474 = 54;
    if (var474 % 2 == 0) {
        printf("var474 is even\n");
    } else {
        printf("var474 is odd\n");
    }

    return 0;
}
