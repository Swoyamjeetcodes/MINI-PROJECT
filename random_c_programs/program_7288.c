
#include <stdio.h>


int func295(int var935) {
    if (var935 <= 0) return 1;
    return func295(var935 - 1);
}


int main() {
    int var925 = 0;
    while (var925 < 19) {
        var925 += 3;
        var925++;
    }    int var826 = 0;
    while (var826 < 8) {
        var826 += 5;
        var826++;
    }    int var236 = 0;
    while (var236 < 8) {
        var236 += 5;
        var236++;
    }

    int var869 = 53;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    int var578 = 71;
    if (var578 % 2 == 0) {
        printf("var578 is even\n");
    } else {
        printf("var578 is odd\n");
    }

    return 0;
}
