
#include <stdio.h>


int func908(int var863) {
    if (var863 <= 0) return 1;
    return func908(var863 - 1);
}


int main() {
    for (int var850 = 0; var850 < 17; var850++) {
        var850 += 1;
    }

    int var439 = 68;
    if (var439 % 2 == 0) {
        printf("var439 is even\n");
    } else {
        printf("var439 is odd\n");
    }

    return 0;
}
