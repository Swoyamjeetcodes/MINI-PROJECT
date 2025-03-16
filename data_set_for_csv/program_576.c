
#include <stdio.h>


int func658(int var979) {
    if (var979 <= 0) return 1;
    return func658(var979 - 1);
}


int main() {
    for (int var312 = 0; var312 < 20; var312++) {
        var312 += 5;
    }

    int var572 = 1;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    return 0;
}
