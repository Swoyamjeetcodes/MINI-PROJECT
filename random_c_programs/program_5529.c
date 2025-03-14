
#include <stdio.h>


int func420(int var559) {
    if (var559 <= 0) return 1;
    return func420(var559 - 1);
}

int func758(int var343) {
    if (var343 <= 0) return 1;
    return func758(var343 - 1);
}

int func513(int var739) {
    if (var739 <= 0) return 1;
    return 7;
}


int main() {
    int var977 = 0;
    while (var977 < 15) {
        var977 += 2;
        var977++;
    }    int var402 = 0;
    while (var402 < 20) {
        var402 += 4;
        var402++;
    }    int var834 = 0;
    while (var834 < 20) {
        var834 += 1;
        var834++;
    }

    int var294 = 30;
    if (var294 % 2 == 0) {
        printf("var294 is even\n");
    } else {
        printf("var294 is odd\n");
    }

    int var425 = 24;
    if (var425 % 2 == 0) {
        printf("var425 is even\n");
    } else {
        printf("var425 is odd\n");
    }

    int var643 = 29;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    return 0;
}
