
#include <stdio.h>


int func685(int var103) {
    if (var103 <= 0) return 1;
    return func685(var103 - 1);
}


int main() {
    int var537 = 0;
    while (var537 < 19) {
        var537 += 2;
        var537++;
    }

    int var628 = 20;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    return 0;
}
