
#include <stdio.h>


int func74(int var287) {
    if (var287 <= 0) return 1;
    return func74(var287 - 1);
}


int main() {
    for (int var737 = 0; var737 < 17; var737++) {
        var737 += 3;
    }    for (int var693 = 0; var693 < 13; var693++) {
        var693 += 5;
    }

    int var851 = 67;
    if (var851 % 2 == 0) {
        printf("var851 is even\n");
    } else {
        printf("var851 is odd\n");
    }

    int var367 = 71;
    if (var367 % 2 == 0) {
        printf("var367 is even\n");
    } else {
        printf("var367 is odd\n");
    }

    return 0;
}
