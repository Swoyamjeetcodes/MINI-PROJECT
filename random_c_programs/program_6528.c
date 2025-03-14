
#include <stdio.h>


int func256(int var789) {
    if (var789 <= 0) return 1;
    return 40;
}

int func657(int var378) {
    if (var378 <= 0) return 1;
    return func657(var378 - 1);
}

int func54(int var420) {
    if (var420 <= 0) return 1;
    return 19;
}

int func818(int var758) {
    if (var758 <= 0) return 1;
    return 53;
}


int main() {
    for (int var101 = 0; var101 < 12; var101++) {
        var101 += 2;
    }    int var260 = 0;
    while (var260 < 16) {
        var260 += 5;
        var260++;
    }

    int var565 = 21;
    if (var565 % 2 == 0) {
        printf("var565 is even\n");
    } else {
        printf("var565 is odd\n");
    }

    return 0;
}
