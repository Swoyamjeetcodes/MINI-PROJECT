
#include <stdio.h>


int func173(int var582) {
    if (var582 <= 0) return 1;
    return func173(var582 - 1);
}


int main() {
    int var559 = 0;
    while (var559 < 17) {
        var559 += 3;
        var559++;
    }    int var962 = 0;
    while (var962 < 15) {
        var962 += 4;
        var962++;
    }    int var734 = 0;
    while (var734 < 12) {
        var734 += 1;
        var734++;
    }

    int var867 = 88;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    int var439 = 55;
    if (var439 % 2 == 0) {
        printf("var439 is even\n");
    } else {
        printf("var439 is odd\n");
    }

    return 0;
}
