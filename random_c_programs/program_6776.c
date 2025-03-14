
#include <stdio.h>


int func663(int var634) {
    if (var634 <= 0) return 1;
    return func663(var634 - 1);
}


int main() {
    int var113 = 0;
    while (var113 < 17) {
        var113 += 1;
        var113++;
    }

    int var391 = 61;
    if (var391 % 2 == 0) {
        printf("var391 is even\n");
    } else {
        printf("var391 is odd\n");
    }

    return 0;
}
