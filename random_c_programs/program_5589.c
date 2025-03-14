
#include <stdio.h>


int func405(int var904) {
    if (var904 <= 0) return 1;
    return func405(var904 - 1);
}


int main() {
    for (int var130 = 0; var130 < 15; var130++) {
        var130 += 1;
    }

    int var127 = 68;
    if (var127 % 2 == 0) {
        printf("var127 is even\n");
    } else {
        printf("var127 is odd\n");
    }

    return 0;
}
