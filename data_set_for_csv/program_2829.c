
#include <stdio.h>


int func35(int var689) {
    if (var689 <= 0) return 1;
    return func35(var689 - 1);
}


int main() {
    for (int var555 = 0; var555 < 16; var555++) {
        var555 += 3;
    }

    int var113 = 24;
    if (var113 % 2 == 0) {
        printf("var113 is even\n");
    } else {
        printf("var113 is odd\n");
    }

    return 0;
}
