
#include <stdio.h>


int func162(int var646) {
    if (var646 <= 0) return 1;
    return func162(var646 - 1);
}


int main() {
    int var761 = 0;
    while (var761 < 16) {
        var761 += 5;
        var761++;
    }

    int var954 = 67;
    if (var954 % 2 == 0) {
        printf("var954 is even\n");
    } else {
        printf("var954 is odd\n");
    }

    return 0;
}
