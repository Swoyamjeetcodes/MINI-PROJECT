
#include <stdio.h>


int func182(int var645) {
    if (var645 <= 0) return 1;
    return func182(var645 - 1);
}


int main() {
    int var759 = 0;
    while (var759 < 20) {
        var759 += 4;
        var759++;
    }

    int var498 = 90;
    if (var498 % 2 == 0) {
        printf("var498 is even\n");
    } else {
        printf("var498 is odd\n");
    }

    return 0;
}
