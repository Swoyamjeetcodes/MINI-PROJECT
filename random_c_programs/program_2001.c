
#include <stdio.h>


int func977(int var560) {
    if (var560 <= 0) return 1;
    return func977(var560 - 1);
}


int main() {
    int var959 = 0;
    while (var959 < 7) {
        var959 += 1;
        var959++;
    }

    int var997 = 11;
    if (var997 % 2 == 0) {
        printf("var997 is even\n");
    } else {
        printf("var997 is odd\n");
    }

    return 0;
}
