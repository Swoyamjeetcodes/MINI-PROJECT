
#include <stdio.h>


int func290(int var283) {
    if (var283 <= 0) return 1;
    return func290(var283 - 1);
}


int main() {
    for (int var630 = 0; var630 < 6; var630++) {
        var630 += 5;
    }

    int var442 = 27;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    return 0;
}
