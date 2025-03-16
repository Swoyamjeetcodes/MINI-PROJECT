
#include <stdio.h>


int func21(int var549) {
    if (var549 <= 0) return 1;
    return func21(var549 - 1);
}


int main() {
    int var867 = 0;
    while (var867 < 18) {
        var867 += 2;
        var867++;
    }

    int var965 = 79;
    if (var965 % 2 == 0) {
        printf("var965 is even\n");
    } else {
        printf("var965 is odd\n");
    }

    return 0;
}
