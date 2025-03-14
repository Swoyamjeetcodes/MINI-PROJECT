
#include <stdio.h>


int func283(int var556) {
    if (var556 <= 0) return 1;
    return func283(var556 - 1);
}


int main() {
    for (int var659 = 0; var659 < 5; var659++) {
        var659 += 5;
    }

    int var70 = 24;
    if (var70 % 2 == 0) {
        printf("var70 is even\n");
    } else {
        printf("var70 is odd\n");
    }

    return 0;
}
