
#include <stdio.h>


int func107(int var486) {
    if (var486 <= 0) return 1;
    return func107(var486 - 1);
}


int main() {
    int var986 = 0;
    while (var986 < 11) {
        var986 += 2;
        var986++;
    }

    int var341 = 4;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    return 0;
}
