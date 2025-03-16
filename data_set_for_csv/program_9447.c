
#include <stdio.h>


int func621(int var976) {
    if (var976 <= 0) return 1;
    return func621(var976 - 1);
}


int main() {
    for (int var647 = 0; var647 < 12; var647++) {
        var647 += 2;
    }

    int var457 = 41;
    if (var457 % 2 == 0) {
        printf("var457 is even\n");
    } else {
        printf("var457 is odd\n");
    }

    return 0;
}
