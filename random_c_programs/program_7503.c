
#include <stdio.h>


int func989(int var947) {
    if (var947 <= 0) return 1;
    return func989(var947 - 1);
}


int main() {
    for (int var177 = 0; var177 < 12; var177++) {
        var177 += 3;
    }

    int var818 = 58;
    if (var818 % 2 == 0) {
        printf("var818 is even\n");
    } else {
        printf("var818 is odd\n");
    }

    return 0;
}
