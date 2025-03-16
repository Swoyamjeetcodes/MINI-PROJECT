
#include <stdio.h>


int func260(int var712) {
    if (var712 <= 0) return 1;
    return func260(var712 - 1);
}


int main() {
    for (int var442 = 0; var442 < 17; var442++) {
        var442 += 2;
    }

    int var257 = 1;
    if (var257 % 2 == 0) {
        printf("var257 is even\n");
    } else {
        printf("var257 is odd\n");
    }

    return 0;
}
