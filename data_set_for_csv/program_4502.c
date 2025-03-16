
#include <stdio.h>


int func658(int var30) {
    if (var30 <= 0) return 1;
    return func658(var30 - 1);
}


int main() {
    for (int var919 = 0; var919 < 10; var919++) {
        var919 += 2;
    }

    int var70 = 45;
    if (var70 % 2 == 0) {
        printf("var70 is even\n");
    } else {
        printf("var70 is odd\n");
    }

    return 0;
}
