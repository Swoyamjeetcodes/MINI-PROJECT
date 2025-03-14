
#include <stdio.h>


int func623(int var198) {
    if (var198 <= 0) return 1;
    return func623(var198 - 1);
}


int main() {
    int var723 = 0;
    while (var723 < 11) {
        var723 += 4;
        var723++;
    }

    int var709 = 38;
    if (var709 % 2 == 0) {
        printf("var709 is even\n");
    } else {
        printf("var709 is odd\n");
    }

    return 0;
}
