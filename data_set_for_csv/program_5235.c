
#include <stdio.h>


int func8(int var296) {
    if (var296 <= 0) return 1;
    return func8(var296 - 1);
}

int func636(int var145) {
    if (var145 <= 0) return 1;
    return 2;
}

int func573(int var675) {
    if (var675 <= 0) return 1;
    return func573(var675 - 1);
}


int main() {
    for (int var841 = 0; var841 < 5; var841++) {
        var841 += 3;
    }    for (int var566 = 0; var566 < 10; var566++) {
        var566 += 4;
    }    for (int var670 = 0; var670 < 14; var670++) {
        var670 += 3;
    }

    int var303 = 25;
    if (var303 % 2 == 0) {
        printf("var303 is even\n");
    } else {
        printf("var303 is odd\n");
    }

    int var355 = 92;
    if (var355 % 2 == 0) {
        printf("var355 is even\n");
    } else {
        printf("var355 is odd\n");
    }

    return 0;
}
