
#include <stdio.h>


int func90(int var88) {
    if (var88 <= 0) return 1;
    return func90(var88 - 1);
}


int main() {
    int var330 = 0;
    while (var330 < 19) {
        var330 += 3;
        var330++;
    }

    int var976 = 27;
    if (var976 % 2 == 0) {
        printf("var976 is even\n");
    } else {
        printf("var976 is odd\n");
    }

    return 0;
}
