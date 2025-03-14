
#include <stdio.h>


int func882(int var715) {
    if (var715 <= 0) return 1;
    return func882(var715 - 1);
}


int main() {
    int var494 = 0;
    while (var494 < 18) {
        var494 += 5;
        var494++;
    }

    int var818 = 97;
    if (var818 % 2 == 0) {
        printf("var818 is even\n");
    } else {
        printf("var818 is odd\n");
    }

    return 0;
}
