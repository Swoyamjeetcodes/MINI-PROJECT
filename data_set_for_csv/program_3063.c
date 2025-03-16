
#include <stdio.h>


int func18(int var151) {
    if (var151 <= 0) return 1;
    return func18(var151 - 1);
}


int main() {
    int var409 = 0;
    while (var409 < 17) {
        var409 += 4;
        var409++;
    }

    int var392 = 4;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    return 0;
}
