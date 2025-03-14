
#include <stdio.h>


int func686(int var751) {
    if (var751 <= 0) return 1;
    return func686(var751 - 1);
}


int main() {
    for (int var418 = 0; var418 < 17; var418++) {
        var418 += 2;
    }

    int var480 = 54;
    if (var480 % 2 == 0) {
        printf("var480 is even\n");
    } else {
        printf("var480 is odd\n");
    }

    return 0;
}
