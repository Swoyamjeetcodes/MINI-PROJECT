
#include <stdio.h>


int func70(int var80) {
    if (var80 <= 0) return 1;
    return func70(var80 - 1);
}


int main() {
    int var596 = 0;
    while (var596 < 7) {
        var596 += 3;
        var596++;
    }

    int var497 = 86;
    if (var497 % 2 == 0) {
        printf("var497 is even\n");
    } else {
        printf("var497 is odd\n");
    }

    return 0;
}
