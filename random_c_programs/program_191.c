
#include <stdio.h>


int func550(int var636) {
    if (var636 <= 0) return 1;
    return func550(var636 - 1);
}

int func6(int var804) {
    if (var804 <= 0) return 1;
    return func6(var804 - 1);
}

int func782(int var532) {
    if (var532 <= 0) return 1;
    return func782(var532 - 1);
}


int main() {
    for (int var610 = 0; var610 < 15; var610++) {
        var610 += 1;
    }

    int var919 = 81;
    if (var919 % 2 == 0) {
        printf("var919 is even\n");
    } else {
        printf("var919 is odd\n");
    }

    return 0;
}
