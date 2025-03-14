
#include <stdio.h>


int func696(int var291) {
    if (var291 <= 0) return 1;
    return func696(var291 - 1);
}


int main() {
    for (int var651 = 0; var651 < 12; var651++) {
        var651 += 4;
    }

    int var228 = 75;
    if (var228 % 2 == 0) {
        printf("var228 is even\n");
    } else {
        printf("var228 is odd\n");
    }

    return 0;
}
