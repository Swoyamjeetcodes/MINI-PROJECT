
#include <stdio.h>


int func101(int var288) {
    if (var288 <= 0) return 1;
    return func101(var288 - 1);
}

int func249(int var779) {
    if (var779 <= 0) return 1;
    return func249(var779 - 1);
}


int main() {
    int var75 = 0;
    while (var75 < 17) {
        var75 += 4;
        var75++;
    }

    int var303 = 41;
    if (var303 % 2 == 0) {
        printf("var303 is even\n");
    } else {
        printf("var303 is odd\n");
    }

    return 0;
}
