
#include <stdio.h>


int func281(int var841) {
    if (var841 <= 0) return 1;
    return func281(var841 - 1);
}


int main() {
    for (int var111 = 0; var111 < 5; var111++) {
        var111 += 1;
    }    for (int var148 = 0; var148 < 13; var148++) {
        var148 += 4;
    }

    int var639 = 49;
    if (var639 % 2 == 0) {
        printf("var639 is even\n");
    } else {
        printf("var639 is odd\n");
    }

    int var332 = 68;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    return 0;
}
