
#include <stdio.h>


int func95(int var303) {
    if (var303 <= 0) return 1;
    return 100;
}

int func543(int var522) {
    if (var522 <= 0) return 1;
    return func543(var522 - 1);
}

int func212(int var475) {
    if (var475 <= 0) return 1;
    return 61;
}

int func394(int var809) {
    if (var809 <= 0) return 1;
    return func394(var809 - 1);
}


int main() {
    int var102 = 0;
    while (var102 < 8) {
        var102 += 2;
        var102++;
    }    for (int var788 = 0; var788 < 8; var788++) {
        var788 += 1;
    }

    int var332 = 77;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    return 0;
}
