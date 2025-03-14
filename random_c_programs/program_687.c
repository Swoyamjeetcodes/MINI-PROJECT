
#include <stdio.h>


int func703(int var810) {
    if (var810 <= 0) return 1;
    return func703(var810 - 1);
}


int main() {
    for (int var333 = 0; var333 < 20; var333++) {
        var333 += 5;
    }

    int var356 = 88;
    if (var356 % 2 == 0) {
        printf("var356 is even\n");
    } else {
        printf("var356 is odd\n");
    }

    return 0;
}
