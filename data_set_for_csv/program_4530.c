
#include <stdio.h>


int func330(int var114) {
    if (var114 <= 0) return 1;
    return func330(var114 - 1);
}


int main() {
    for (int var38 = 0; var38 < 7; var38++) {
        var38 += 4;
    }

    int var89 = 13;
    if (var89 % 2 == 0) {
        printf("var89 is even\n");
    } else {
        printf("var89 is odd\n");
    }

    return 0;
}
