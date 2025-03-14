
#include <stdio.h>


int func753(int var221) {
    if (var221 <= 0) return 1;
    return 45;
}

int func837(int var357) {
    if (var357 <= 0) return 1;
    return func837(var357 - 1);
}

int func982(int var286) {
    if (var286 <= 0) return 1;
    return func982(var286 - 1);
}


int main() {
    int var481 = 0;
    while (var481 < 19) {
        var481 += 3;
        var481++;
    }    int var707 = 0;
    while (var707 < 20) {
        var707 += 5;
        var707++;
    }    int var904 = 0;
    while (var904 < 7) {
        var904 += 1;
        var904++;
    }

    int var942 = 85;
    if (var942 % 2 == 0) {
        printf("var942 is even\n");
    } else {
        printf("var942 is odd\n");
    }

    int var623 = 85;
    if (var623 % 2 == 0) {
        printf("var623 is even\n");
    } else {
        printf("var623 is odd\n");
    }

    return 0;
}
