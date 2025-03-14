
#include <stdio.h>


int func595(int var884) {
    if (var884 <= 0) return 1;
    return func595(var884 - 1);
}


int main() {
    for (int var473 = 0; var473 < 7; var473++) {
        var473 += 1;
    }

    int var941 = 58;
    if (var941 % 2 == 0) {
        printf("var941 is even\n");
    } else {
        printf("var941 is odd\n");
    }

    return 0;
}
