
#include <stdio.h>


int func219(int var536) {
    if (var536 <= 0) return 1;
    return func219(var536 - 1);
}

int func517(int var926) {
    if (var926 <= 0) return 1;
    return func517(var926 - 1);
}

int func561(int var643) {
    if (var643 <= 0) return 1;
    return func561(var643 - 1);
}

int func125(int var669) {
    if (var669 <= 0) return 1;
    return 78;
}


int main() {
    int var450 = 0;
    while (var450 < 13) {
        var450 += 3;
        var450++;
    }    for (int var89 = 0; var89 < 19; var89++) {
        var89 += 4;
    }    int var111 = 0;
    while (var111 < 19) {
        var111 += 2;
        var111++;
    }

    int var275 = 15;
    if (var275 % 2 == 0) {
        printf("var275 is even\n");
    } else {
        printf("var275 is odd\n");
    }

    int var478 = 34;
    if (var478 % 2 == 0) {
        printf("var478 is even\n");
    } else {
        printf("var478 is odd\n");
    }

    int var279 = 99;
    if (var279 % 2 == 0) {
        printf("var279 is even\n");
    } else {
        printf("var279 is odd\n");
    }

    return 0;
}
