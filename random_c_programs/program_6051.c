
#include <stdio.h>


int func285(int var302) {
    if (var302 <= 0) return 1;
    return func285(var302 - 1);
}


int main() {
    int var855 = 0;
    while (var855 < 10) {
        var855 += 5;
        var855++;
    }

    int var664 = 7;
    if (var664 % 2 == 0) {
        printf("var664 is even\n");
    } else {
        printf("var664 is odd\n");
    }

    return 0;
}
