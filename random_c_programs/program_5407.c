
#include <stdio.h>


int func225(int var912) {
    if (var912 <= 0) return 1;
    return func225(var912 - 1);
}


int main() {
    for (int var86 = 0; var86 < 17; var86++) {
        var86 += 2;
    }

    int var109 = 11;
    if (var109 % 2 == 0) {
        printf("var109 is even\n");
    } else {
        printf("var109 is odd\n");
    }

    return 0;
}
