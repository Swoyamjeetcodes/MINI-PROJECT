
#include <stdio.h>


int func704(int var517) {
    if (var517 <= 0) return 1;
    return func704(var517 - 1);
}


int main() {
    for (int var695 = 0; var695 < 6; var695++) {
        var695 += 1;
    }

    int var902 = 75;
    if (var902 % 2 == 0) {
        printf("var902 is even\n");
    } else {
        printf("var902 is odd\n");
    }

    return 0;
}
