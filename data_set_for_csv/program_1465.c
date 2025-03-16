
#include <stdio.h>


int func879(int var705) {
    if (var705 <= 0) return 1;
    return func879(var705 - 1);
}


int main() {
    for (int var381 = 0; var381 < 15; var381++) {
        var381 += 5;
    }

    int var976 = 74;
    if (var976 % 2 == 0) {
        printf("var976 is even\n");
    } else {
        printf("var976 is odd\n");
    }

    return 0;
}
