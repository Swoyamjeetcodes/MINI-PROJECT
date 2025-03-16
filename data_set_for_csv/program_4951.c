
#include <stdio.h>


int func852(int var640) {
    if (var640 <= 0) return 1;
    return func852(var640 - 1);
}


int main() {
    for (int var294 = 0; var294 < 10; var294++) {
        var294 += 1;
    }

    int var302 = 62;
    if (var302 % 2 == 0) {
        printf("var302 is even\n");
    } else {
        printf("var302 is odd\n");
    }

    return 0;
}
