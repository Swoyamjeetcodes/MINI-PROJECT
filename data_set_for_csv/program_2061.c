
#include <stdio.h>


int func819(int var680) {
    if (var680 <= 0) return 1;
    return func819(var680 - 1);
}


int main() {
    for (int var320 = 0; var320 < 12; var320++) {
        var320 += 1;
    }

    int var341 = 70;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    return 0;
}
