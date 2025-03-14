
#include <stdio.h>


int func533(int var462) {
    if (var462 <= 0) return 1;
    return func533(var462 - 1);
}


int main() {
    for (int var16 = 0; var16 < 18; var16++) {
        var16 += 3;
    }

    int var660 = 29;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    return 0;
}
