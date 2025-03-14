
#include <stdio.h>


int func603(int var812) {
    if (var812 <= 0) return 1;
    return func603(var812 - 1);
}


int main() {
    int var647 = 0;
    while (var647 < 10) {
        var647 += 3;
        var647++;
    }

    int var66 = 63;
    if (var66 % 2 == 0) {
        printf("var66 is even\n");
    } else {
        printf("var66 is odd\n");
    }

    return 0;
}
