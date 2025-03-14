
#include <stdio.h>


int func351(int var924) {
    if (var924 <= 0) return 1;
    return func351(var924 - 1);
}

int func333(int var634) {
    if (var634 <= 0) return 1;
    return func333(var634 - 1);
}

int func43(int var1000) {
    if (var1000 <= 0) return 1;
    return func43(var1000 - 1);
}


int main() {
    int var138 = 0;
    while (var138 < 12) {
        var138 += 4;
        var138++;
    }    int var422 = 0;
    while (var422 < 5) {
        var422 += 2;
        var422++;
    }    for (int var154 = 0; var154 < 6; var154++) {
        var154 += 2;
    }

    int var292 = 33;
    if (var292 % 2 == 0) {
        printf("var292 is even\n");
    } else {
        printf("var292 is odd\n");
    }

    int var524 = 94;
    if (var524 % 2 == 0) {
        printf("var524 is even\n");
    } else {
        printf("var524 is odd\n");
    }

    return 0;
}
