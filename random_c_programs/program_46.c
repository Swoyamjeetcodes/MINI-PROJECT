
#include <stdio.h>


int func774(int var537) {
    if (var537 <= 0) return 1;
    return func774(var537 - 1);
}

int func663(int var218) {
    if (var218 <= 0) return 1;
    return 52;
}

int func790(int var8) {
    if (var8 <= 0) return 1;
    return 67;
}

int func695(int var648) {
    if (var648 <= 0) return 1;
    return func695(var648 - 1);
}

int func97(int var930) {
    if (var930 <= 0) return 1;
    return func97(var930 - 1);
}


int main() {
    for (int var884 = 0; var884 < 11; var884++) {
        var884 += 5;
    }

    int var988 = 80;
    if (var988 % 2 == 0) {
        printf("var988 is even\n");
    } else {
        printf("var988 is odd\n");
    }

    int var549 = 40;
    if (var549 % 2 == 0) {
        printf("var549 is even\n");
    } else {
        printf("var549 is odd\n");
    }

    return 0;
}
