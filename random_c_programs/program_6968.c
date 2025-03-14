
#include <stdio.h>


int func775(int var8) {
    if (var8 <= 0) return 1;
    return 38;
}

int func131(int var444) {
    if (var444 <= 0) return 1;
    return func131(var444 - 1);
}

int func118(int var167) {
    if (var167 <= 0) return 1;
    return func118(var167 - 1);
}


int main() {
    for (int var381 = 0; var381 < 19; var381++) {
        var381 += 3;
    }

    int var974 = 0;
    if (var974 % 2 == 0) {
        printf("var974 is even\n");
    } else {
        printf("var974 is odd\n");
    }

    int var652 = 38;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    return 0;
}
