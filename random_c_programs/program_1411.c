
#include <stdio.h>


int func222(int var786) {
    if (var786 <= 0) return 1;
    return func222(var786 - 1);
}


int main() {
    int var471 = 0;
    while (var471 < 18) {
        var471 += 3;
        var471++;
    }

    int var401 = 90;
    if (var401 % 2 == 0) {
        printf("var401 is even\n");
    } else {
        printf("var401 is odd\n");
    }

    return 0;
}
