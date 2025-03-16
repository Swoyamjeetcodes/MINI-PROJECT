
#include <stdio.h>


int func642(int var489) {
    if (var489 <= 0) return 1;
    return func642(var489 - 1);
}


int main() {
    for (int var321 = 0; var321 < 15; var321++) {
        var321 += 1;
    }

    int var345 = 52;
    if (var345 % 2 == 0) {
        printf("var345 is even\n");
    } else {
        printf("var345 is odd\n");
    }

    return 0;
}
