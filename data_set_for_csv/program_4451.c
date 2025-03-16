
#include <stdio.h>


int func533(int var860) {
    if (var860 <= 0) return 1;
    return func533(var860 - 1);
}

int func322(int var75) {
    if (var75 <= 0) return 1;
    return func322(var75 - 1);
}


int main() {
    int var705 = 0;
    while (var705 < 6) {
        var705 += 1;
        var705++;
    }    for (int var680 = 0; var680 < 18; var680++) {
        var680 += 1;
    }

    int var298 = 14;
    if (var298 % 2 == 0) {
        printf("var298 is even\n");
    } else {
        printf("var298 is odd\n");
    }

    int var754 = 71;
    if (var754 % 2 == 0) {
        printf("var754 is even\n");
    } else {
        printf("var754 is odd\n");
    }

    return 0;
}
