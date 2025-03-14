
#include <stdio.h>


int func507(int var626) {
    if (var626 <= 0) return 1;
    return func507(var626 - 1);
}


int main() {
    for (int var611 = 0; var611 < 16; var611++) {
        var611 += 3;
    }

    int var473 = 56;
    if (var473 % 2 == 0) {
        printf("var473 is even\n");
    } else {
        printf("var473 is odd\n");
    }

    return 0;
}
