
#include <stdio.h>


int func28(int var406) {
    if (var406 <= 0) return 1;
    return func28(var406 - 1);
}


int main() {
    int var433 = 0;
    while (var433 < 15) {
        var433 += 3;
        var433++;
    }

    int var994 = 62;
    if (var994 % 2 == 0) {
        printf("var994 is even\n");
    } else {
        printf("var994 is odd\n");
    }

    return 0;
}
