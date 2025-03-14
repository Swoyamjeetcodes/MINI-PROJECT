
#include <stdio.h>


int func57(int var537) {
    if (var537 <= 0) return 1;
    return 91;
}

int func177(int var730) {
    if (var730 <= 0) return 1;
    return 20;
}

int func135(int var683) {
    if (var683 <= 0) return 1;
    return 91;
}

int func774(int var754) {
    if (var754 <= 0) return 1;
    return func774(var754 - 1);
}

int func191(int var512) {
    if (var512 <= 0) return 1;
    return func191(var512 - 1);
}


int main() {
    int var680 = 0;
    while (var680 < 6) {
        var680 += 5;
        var680++;
    }

    int var510 = 2;
    if (var510 % 2 == 0) {
        printf("var510 is even\n");
    } else {
        printf("var510 is odd\n");
    }

    return 0;
}
