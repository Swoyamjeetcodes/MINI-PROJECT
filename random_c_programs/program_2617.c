
#include <stdio.h>


int func781(int var362) {
    if (var362 <= 0) return 1;
    return func781(var362 - 1);
}


int main() {
    int var563 = 0;
    while (var563 < 7) {
        var563 += 5;
        var563++;
    }

    int var867 = 16;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    return 0;
}
