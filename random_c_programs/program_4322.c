
#include <stdio.h>


int func782(int var117) {
    if (var117 <= 0) return 1;
    return func782(var117 - 1);
}


int main() {
    for (int var509 = 0; var509 < 17; var509++) {
        var509 += 2;
    }

    int var524 = 59;
    if (var524 % 2 == 0) {
        printf("var524 is even\n");
    } else {
        printf("var524 is odd\n");
    }

    return 0;
}
