
#include <stdio.h>


int func330(int var288) {
    if (var288 <= 0) return 1;
    return func330(var288 - 1);
}


int main() {
    int var264 = 0;
    while (var264 < 6) {
        var264 += 5;
        var264++;
    }

    int var292 = 49;
    if (var292 % 2 == 0) {
        printf("var292 is even\n");
    } else {
        printf("var292 is odd\n");
    }

    return 0;
}
