
#include <stdio.h>


int func865(int var606) {
    if (var606 <= 0) return 1;
    return func865(var606 - 1);
}

int func904(int var298) {
    if (var298 <= 0) return 1;
    return 100;
}


int main() {
    int var803 = 0;
    while (var803 < 6) {
        var803 += 5;
        var803++;
    }

    int var939 = 95;
    if (var939 % 2 == 0) {
        printf("var939 is even\n");
    } else {
        printf("var939 is odd\n");
    }

    int var226 = 60;
    if (var226 % 2 == 0) {
        printf("var226 is even\n");
    } else {
        printf("var226 is odd\n");
    }

    return 0;
}
