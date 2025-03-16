
#include <stdio.h>


int func626(int var442) {
    if (var442 <= 0) return 1;
    return func626(var442 - 1);
}


int main() {
    for (int var352 = 0; var352 < 7; var352++) {
        var352 += 3;
    }

    int var99 = 72;
    if (var99 % 2 == 0) {
        printf("var99 is even\n");
    } else {
        printf("var99 is odd\n");
    }

    return 0;
}
