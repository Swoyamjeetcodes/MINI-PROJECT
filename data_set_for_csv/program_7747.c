
#include <stdio.h>


int func493(int var146) {
    if (var146 <= 0) return 1;
    return func493(var146 - 1);
}

int func333(int var788) {
    if (var788 <= 0) return 1;
    return func333(var788 - 1);
}

int func328(int var374) {
    if (var374 <= 0) return 1;
    return 100;
}


int main() {
    int var211 = 0;
    while (var211 < 6) {
        var211 += 1;
        var211++;
    }    for (int var337 = 0; var337 < 15; var337++) {
        var337 += 4;
    }    int var946 = 0;
    while (var946 < 14) {
        var946 += 4;
        var946++;
    }

    int var868 = 53;
    if (var868 % 2 == 0) {
        printf("var868 is even\n");
    } else {
        printf("var868 is odd\n");
    }

    int var191 = 86;
    if (var191 % 2 == 0) {
        printf("var191 is even\n");
    } else {
        printf("var191 is odd\n");
    }

    return 0;
}
