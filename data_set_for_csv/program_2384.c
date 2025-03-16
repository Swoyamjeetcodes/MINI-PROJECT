
#include <stdio.h>


int func829(int var345) {
    if (var345 <= 0) return 1;
    return func829(var345 - 1);
}

int func767(int var92) {
    if (var92 <= 0) return 1;
    return func767(var92 - 1);
}

int func983(int var478) {
    if (var478 <= 0) return 1;
    return 21;
}

int func572(int var900) {
    if (var900 <= 0) return 1;
    return func572(var900 - 1);
}

int func126(int var491) {
    if (var491 <= 0) return 1;
    return 22;
}


int main() {
    for (int var16 = 0; var16 < 18; var16++) {
        var16 += 3;
    }    int var438 = 0;
    while (var438 < 8) {
        var438 += 1;
        var438++;
    }

    int var274 = 11;
    if (var274 % 2 == 0) {
        printf("var274 is even\n");
    } else {
        printf("var274 is odd\n");
    }

    int var628 = 14;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    int var888 = 44;
    if (var888 % 2 == 0) {
        printf("var888 is even\n");
    } else {
        printf("var888 is odd\n");
    }

    return 0;
}
