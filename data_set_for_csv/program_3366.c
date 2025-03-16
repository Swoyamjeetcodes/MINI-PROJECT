
#include <stdio.h>


int func103(int var283) {
    if (var283 <= 0) return 1;
    return func103(var283 - 1);
}


int main() {
    for (int var1 = 0; var1 < 10; var1++) {
        var1 += 3;
    }

    int var366 = 96;
    if (var366 % 2 == 0) {
        printf("var366 is even\n");
    } else {
        printf("var366 is odd\n");
    }

    return 0;
}
