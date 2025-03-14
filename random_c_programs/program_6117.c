
#include <stdio.h>


int func704(int var307) {
    if (var307 <= 0) return 1;
    return func704(var307 - 1);
}


int main() {
    for (int var165 = 0; var165 < 8; var165++) {
        var165 += 1;
    }

    int var988 = 69;
    if (var988 % 2 == 0) {
        printf("var988 is even\n");
    } else {
        printf("var988 is odd\n");
    }

    return 0;
}
