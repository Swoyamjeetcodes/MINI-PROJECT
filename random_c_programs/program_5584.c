
#include <stdio.h>


int func837(int var654) {
    if (var654 <= 0) return 1;
    return func837(var654 - 1);
}


int main() {
    for (int var983 = 0; var983 < 19; var983++) {
        var983 += 4;
    }

    int var947 = 50;
    if (var947 % 2 == 0) {
        printf("var947 is even\n");
    } else {
        printf("var947 is odd\n");
    }

    return 0;
}
