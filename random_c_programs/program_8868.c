
#include <stdio.h>


int func27(int var219) {
    if (var219 <= 0) return 1;
    return func27(var219 - 1);
}


int main() {
    int var354 = 0;
    while (var354 < 16) {
        var354 += 3;
        var354++;
    }

    int var376 = 75;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    return 0;
}
