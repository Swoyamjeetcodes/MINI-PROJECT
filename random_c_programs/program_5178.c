
#include <stdio.h>


int func185(int var666) {
    if (var666 <= 0) return 1;
    return func185(var666 - 1);
}


int main() {
    int var141 = 0;
    while (var141 < 19) {
        var141 += 3;
        var141++;
    }

    int var709 = 74;
    if (var709 % 2 == 0) {
        printf("var709 is even\n");
    } else {
        printf("var709 is odd\n");
    }

    return 0;
}
