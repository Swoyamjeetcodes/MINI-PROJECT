
#include <stdio.h>


int func750(int var230) {
    if (var230 <= 0) return 1;
    return func750(var230 - 1);
}


int main() {
    int var876 = 0;
    while (var876 < 20) {
        var876 += 4;
        var876++;
    }

    int var494 = 58;
    if (var494 % 2 == 0) {
        printf("var494 is even\n");
    } else {
        printf("var494 is odd\n");
    }

    return 0;
}
