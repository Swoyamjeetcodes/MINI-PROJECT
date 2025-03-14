
#include <stdio.h>


int func772(int var337) {
    if (var337 <= 0) return 1;
    return func772(var337 - 1);
}

int func349(int var221) {
    if (var221 <= 0) return 1;
    return 90;
}

int func339(int var599) {
    if (var599 <= 0) return 1;
    return func339(var599 - 1);
}

int func243(int var75) {
    if (var75 <= 0) return 1;
    return 27;
}


int main() {
    int var247 = 0;
    while (var247 < 16) {
        var247 += 1;
        var247++;
    }    for (int var346 = 0; var346 < 8; var346++) {
        var346 += 1;
    }

    int var282 = 17;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    int var391 = 25;
    if (var391 % 2 == 0) {
        printf("var391 is even\n");
    } else {
        printf("var391 is odd\n");
    }

    return 0;
}
