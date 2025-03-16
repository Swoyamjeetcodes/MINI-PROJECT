
#include <stdio.h>


int func362(int var150) {
    if (var150 <= 0) return 1;
    return func362(var150 - 1);
}

int func753(int var542) {
    if (var542 <= 0) return 1;
    return 90;
}

int func238(int var526) {
    if (var526 <= 0) return 1;
    return func238(var526 - 1);
}


int main() {
    for (int var466 = 0; var466 < 6; var466++) {
        var466 += 3;
    }    int var498 = 0;
    while (var498 < 10) {
        var498 += 1;
        var498++;
    }    for (int var449 = 0; var449 < 20; var449++) {
        var449 += 2;
    }

    int var654 = 77;
    if (var654 % 2 == 0) {
        printf("var654 is even\n");
    } else {
        printf("var654 is odd\n");
    }

    int var368 = 15;
    if (var368 % 2 == 0) {
        printf("var368 is even\n");
    } else {
        printf("var368 is odd\n");
    }

    return 0;
}
