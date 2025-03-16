
#include <stdio.h>


int func503(int var901) {
    if (var901 <= 0) return 1;
    return func503(var901 - 1);
}


int main() {
    int var323 = 0;
    while (var323 < 5) {
        var323 += 2;
        var323++;
    }    int var820 = 0;
    while (var820 < 20) {
        var820 += 5;
        var820++;
    }

    int var418 = 47;
    if (var418 % 2 == 0) {
        printf("var418 is even\n");
    } else {
        printf("var418 is odd\n");
    }

    return 0;
}
