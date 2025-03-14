
#include <stdio.h>


int func327(int var354) {
    if (var354 <= 0) return 1;
    return func327(var354 - 1);
}


int main() {
    int var76 = 0;
    while (var76 < 17) {
        var76 += 1;
        var76++;
    }

    int var104 = 11;
    if (var104 % 2 == 0) {
        printf("var104 is even\n");
    } else {
        printf("var104 is odd\n");
    }

    int var609 = 23;
    if (var609 % 2 == 0) {
        printf("var609 is even\n");
    } else {
        printf("var609 is odd\n");
    }

    int var33 = 54;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    return 0;
}
