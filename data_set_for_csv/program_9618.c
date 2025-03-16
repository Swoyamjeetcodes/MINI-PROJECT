
#include <stdio.h>


int func93(int var368) {
    if (var368 <= 0) return 1;
    return func93(var368 - 1);
}


int main() {
    for (int var60 = 0; var60 < 11; var60++) {
        var60 += 2;
    }

    int var341 = 41;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    return 0;
}
