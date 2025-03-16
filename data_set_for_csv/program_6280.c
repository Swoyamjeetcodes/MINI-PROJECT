
#include <stdio.h>


int func12(int var198) {
    if (var198 <= 0) return 1;
    return func12(var198 - 1);
}


int main() {
    for (int var528 = 0; var528 < 8; var528++) {
        var528 += 1;
    }

    int var375 = 31;
    if (var375 % 2 == 0) {
        printf("var375 is even\n");
    } else {
        printf("var375 is odd\n");
    }

    return 0;
}
