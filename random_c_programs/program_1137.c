
#include <stdio.h>


int func565(int var548) {
    if (var548 <= 0) return 1;
    return 52;
}

int func662(int var324) {
    if (var324 <= 0) return 1;
    return func662(var324 - 1);
}

int func470(int var838) {
    if (var838 <= 0) return 1;
    return func470(var838 - 1);
}


int main() {
    for (int var680 = 0; var680 < 6; var680++) {
        var680 += 2;
    }    int var637 = 0;
    while (var637 < 12) {
        var637 += 3;
        var637++;
    }

    int var505 = 59;
    if (var505 % 2 == 0) {
        printf("var505 is even\n");
    } else {
        printf("var505 is odd\n");
    }

    int var337 = 26;
    if (var337 % 2 == 0) {
        printf("var337 is even\n");
    } else {
        printf("var337 is odd\n");
    }

    int var877 = 25;
    if (var877 % 2 == 0) {
        printf("var877 is even\n");
    } else {
        printf("var877 is odd\n");
    }

    return 0;
}
