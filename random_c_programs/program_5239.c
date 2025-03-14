
#include <stdio.h>


int func879(int var475) {
    if (var475 <= 0) return 1;
    return func879(var475 - 1);
}


int main() {
    for (int var556 = 0; var556 < 18; var556++) {
        var556 += 4;
    }

    int var465 = 88;
    if (var465 % 2 == 0) {
        printf("var465 is even\n");
    } else {
        printf("var465 is odd\n");
    }

    return 0;
}
