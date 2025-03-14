
#include <stdio.h>


int func36(int var688) {
    if (var688 <= 0) return 1;
    return func36(var688 - 1);
}


int main() {
    for (int var279 = 0; var279 < 7; var279++) {
        var279 += 4;
    }

    int var347 = 52;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    return 0;
}
