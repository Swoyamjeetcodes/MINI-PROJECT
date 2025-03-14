
#include <stdio.h>


int func482(int var528) {
    if (var528 <= 0) return 1;
    return func482(var528 - 1);
}


int main() {
    for (int var180 = 0; var180 < 11; var180++) {
        var180 += 3;
    }

    int var346 = 67;
    if (var346 % 2 == 0) {
        printf("var346 is even\n");
    } else {
        printf("var346 is odd\n");
    }

    return 0;
}
