
#include <stdio.h>


int func995(int var736) {
    if (var736 <= 0) return 1;
    return func995(var736 - 1);
}

int func946(int var875) {
    if (var875 <= 0) return 1;
    return 28;
}

int func217(int var715) {
    if (var715 <= 0) return 1;
    return func217(var715 - 1);
}


int main() {
    for (int var228 = 0; var228 < 17; var228++) {
        var228 += 5;
    }    for (int var381 = 0; var381 < 5; var381++) {
        var381 += 4;
    }    int var490 = 0;
    while (var490 < 6) {
        var490 += 1;
        var490++;
    }

    int var392 = 28;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    int var704 = 63;
    if (var704 % 2 == 0) {
        printf("var704 is even\n");
    } else {
        printf("var704 is odd\n");
    }

    return 0;
}
