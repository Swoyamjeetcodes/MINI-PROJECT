
#include <stdio.h>


int func771(int var910) {
    if (var910 <= 0) return 1;
    return func771(var910 - 1);
}


int main() {
    for (int var446 = 0; var446 < 6; var446++) {
        var446 += 3;
    }

    int var360 = 77;
    if (var360 % 2 == 0) {
        printf("var360 is even\n");
    } else {
        printf("var360 is odd\n");
    }

    return 0;
}
