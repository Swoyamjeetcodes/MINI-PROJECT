
#include <stdio.h>


int func182(int var143) {
    if (var143 <= 0) return 1;
    return func182(var143 - 1);
}


int main() {
    for (int var850 = 0; var850 < 17; var850++) {
        var850 += 3;
    }

    int var232 = 47;
    if (var232 % 2 == 0) {
        printf("var232 is even\n");
    } else {
        printf("var232 is odd\n");
    }

    return 0;
}
