
#include <stdio.h>


int func182(int var825) {
    if (var825 <= 0) return 1;
    return func182(var825 - 1);
}

int func747(int var892) {
    if (var892 <= 0) return 1;
    return func747(var892 - 1);
}

int func824(int var631) {
    if (var631 <= 0) return 1;
    return func824(var631 - 1);
}

int func490(int var736) {
    if (var736 <= 0) return 1;
    return 27;
}

int func732(int var206) {
    if (var206 <= 0) return 1;
    return 39;
}


int main() {
    int var967 = 0;
    while (var967 < 10) {
        var967 += 5;
        var967++;
    }    int var964 = 0;
    while (var964 < 14) {
        var964 += 2;
        var964++;
    }    for (int var87 = 0; var87 < 19; var87++) {
        var87 += 1;
    }

    int var386 = 98;
    if (var386 % 2 == 0) {
        printf("var386 is even\n");
    } else {
        printf("var386 is odd\n");
    }

    int var14 = 57;
    if (var14 % 2 == 0) {
        printf("var14 is even\n");
    } else {
        printf("var14 is odd\n");
    }

    int var406 = 19;
    if (var406 % 2 == 0) {
        printf("var406 is even\n");
    } else {
        printf("var406 is odd\n");
    }

    return 0;
}
