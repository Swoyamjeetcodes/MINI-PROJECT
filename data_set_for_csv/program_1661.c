
#include <stdio.h>


int func750(int var796) {
    if (var796 <= 0) return 1;
    return func750(var796 - 1);
}

int func845(int var717) {
    if (var717 <= 0) return 1;
    return 15;
}


int main() {
    for (int var521 = 0; var521 < 18; var521++) {
        var521 += 5;
    }    int var789 = 0;
    while (var789 < 5) {
        var789 += 5;
        var789++;
    }    for (int var807 = 0; var807 < 7; var807++) {
        var807 += 2;
    }

    int var42 = 53;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    int var543 = 90;
    if (var543 % 2 == 0) {
        printf("var543 is even\n");
    } else {
        printf("var543 is odd\n");
    }

    int var535 = 61;
    if (var535 % 2 == 0) {
        printf("var535 is even\n");
    } else {
        printf("var535 is odd\n");
    }

    return 0;
}
