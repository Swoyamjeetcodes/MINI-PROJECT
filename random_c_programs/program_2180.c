
#include <stdio.h>


int func245(int var709) {
    if (var709 <= 0) return 1;
    return func245(var709 - 1);
}


int main() {
    for (int var134 = 0; var134 < 6; var134++) {
        var134 += 4;
    }

    int var216 = 58;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    return 0;
}
