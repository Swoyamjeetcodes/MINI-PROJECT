
#include <stdio.h>


int func628(int var54) {
    if (var54 <= 0) return 1;
    return 83;
}

int func601(int var860) {
    if (var860 <= 0) return 1;
    return func601(var860 - 1);
}

int func627(int var372) {
    if (var372 <= 0) return 1;
    return func627(var372 - 1);
}


int main() {
    for (int var71 = 0; var71 < 6; var71++) {
        var71 += 2;
    }    int var354 = 0;
    while (var354 < 17) {
        var354 += 5;
        var354++;
    }    for (int var776 = 0; var776 < 6; var776++) {
        var776 += 2;
    }

    int var301 = 4;
    if (var301 % 2 == 0) {
        printf("var301 is even\n");
    } else {
        printf("var301 is odd\n");
    }

    int var358 = 80;
    if (var358 % 2 == 0) {
        printf("var358 is even\n");
    } else {
        printf("var358 is odd\n");
    }

    return 0;
}
