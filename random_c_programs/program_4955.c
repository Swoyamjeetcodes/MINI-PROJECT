
#include <stdio.h>


int func230(int var250) {
    if (var250 <= 0) return 1;
    return func230(var250 - 1);
}


int main() {
    for (int var915 = 0; var915 < 18; var915++) {
        var915 += 4;
    }

    int var705 = 84;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    return 0;
}
