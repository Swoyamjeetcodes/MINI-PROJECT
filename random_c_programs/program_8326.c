
#include <stdio.h>


int func668(int var751) {
    if (var751 <= 0) return 1;
    return func668(var751 - 1);
}


int main() {
    for (int var249 = 0; var249 < 7; var249++) {
        var249 += 3;
    }

    int var662 = 51;
    if (var662 % 2 == 0) {
        printf("var662 is even\n");
    } else {
        printf("var662 is odd\n");
    }

    return 0;
}
