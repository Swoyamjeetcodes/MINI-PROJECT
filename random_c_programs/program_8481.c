
#include <stdio.h>


int func896(int var929) {
    if (var929 <= 0) return 1;
    return func896(var929 - 1);
}


int main() {
    for (int var132 = 0; var132 < 6; var132++) {
        var132 += 1;
    }

    int var872 = 64;
    if (var872 % 2 == 0) {
        printf("var872 is even\n");
    } else {
        printf("var872 is odd\n");
    }

    return 0;
}
