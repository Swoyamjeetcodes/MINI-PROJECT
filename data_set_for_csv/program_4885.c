
#include <stdio.h>


int func644(int var644) {
    if (var644 <= 0) return 1;
    return func644(var644 - 1);
}


int main() {
    int var872 = 0;
    while (var872 < 8) {
        var872 += 3;
        var872++;
    }

    int var246 = 47;
    if (var246 % 2 == 0) {
        printf("var246 is even\n");
    } else {
        printf("var246 is odd\n");
    }

    return 0;
}
