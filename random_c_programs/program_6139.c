
#include <stdio.h>


int func330(int var555) {
    if (var555 <= 0) return 1;
    return func330(var555 - 1);
}


int main() {
    for (int var191 = 0; var191 < 17; var191++) {
        var191 += 3;
    }

    int var606 = 23;
    if (var606 % 2 == 0) {
        printf("var606 is even\n");
    } else {
        printf("var606 is odd\n");
    }

    return 0;
}
