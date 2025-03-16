
#include <stdio.h>


int func512(int var13) {
    if (var13 <= 0) return 1;
    return 35;
}

int func602(int var108) {
    if (var108 <= 0) return 1;
    return func602(var108 - 1);
}


int main() {
    int var874 = 0;
    while (var874 < 12) {
        var874 += 2;
        var874++;
    }    for (int var210 = 0; var210 < 5; var210++) {
        var210 += 1;
    }    for (int var375 = 0; var375 < 10; var375++) {
        var375 += 1;
    }    for (int var625 = 0; var625 < 10; var625++) {
        var625 += 1;
    }

    int var612 = 28;
    if (var612 % 2 == 0) {
        printf("var612 is even\n");
    } else {
        printf("var612 is odd\n");
    }

    return 0;
}
