
#include <stdio.h>


int func737(int var438) {
    if (var438 <= 0) return 1;
    return func737(var438 - 1);
}


int main() {
    int var869 = 0;
    while (var869 < 17) {
        var869 += 2;
        var869++;
    }

    int var661 = 57;
    if (var661 % 2 == 0) {
        printf("var661 is even\n");
    } else {
        printf("var661 is odd\n");
    }

    return 0;
}
