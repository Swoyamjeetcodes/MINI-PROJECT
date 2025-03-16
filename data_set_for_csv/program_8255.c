
#include <stdio.h>


int func998(int var494) {
    if (var494 <= 0) return 1;
    return func998(var494 - 1);
}

int func578(int var646) {
    if (var646 <= 0) return 1;
    return 3;
}

int func855(int var307) {
    if (var307 <= 0) return 1;
    return 50;
}


int main() {
    int var657 = 0;
    while (var657 < 16) {
        var657 += 2;
        var657++;
    }    int var338 = 0;
    while (var338 < 13) {
        var338 += 2;
        var338++;
    }    for (int var490 = 0; var490 < 14; var490++) {
        var490 += 1;
    }

    int var568 = 66;
    if (var568 % 2 == 0) {
        printf("var568 is even\n");
    } else {
        printf("var568 is odd\n");
    }

    return 0;
}
