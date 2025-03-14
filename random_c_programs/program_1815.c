
#include <stdio.h>


int func546(int var947) {
    if (var947 <= 0) return 1;
    return func546(var947 - 1);
}


int main() {
    int var238 = 0;
    while (var238 < 15) {
        var238 += 3;
        var238++;
    }

    int var131 = 12;
    if (var131 % 2 == 0) {
        printf("var131 is even\n");
    } else {
        printf("var131 is odd\n");
    }

    return 0;
}
