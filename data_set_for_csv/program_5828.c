
#include <stdio.h>


int func196(int var360) {
    if (var360 <= 0) return 1;
    return func196(var360 - 1);
}


int main() {
    for (int var25 = 0; var25 < 6; var25++) {
        var25 += 2;
    }

    int var427 = 41;
    if (var427 % 2 == 0) {
        printf("var427 is even\n");
    } else {
        printf("var427 is odd\n");
    }

    return 0;
}
