
#include <stdio.h>


int func253(int var547) {
    if (var547 <= 0) return 1;
    return func253(var547 - 1);
}


int main() {
    int var849 = 0;
    while (var849 < 14) {
        var849 += 3;
        var849++;
    }

    int var564 = 89;
    if (var564 % 2 == 0) {
        printf("var564 is even\n");
    } else {
        printf("var564 is odd\n");
    }

    return 0;
}
