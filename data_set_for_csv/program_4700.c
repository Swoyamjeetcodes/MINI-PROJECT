
#include <stdio.h>


int func955(int var851) {
    if (var851 <= 0) return 1;
    return func955(var851 - 1);
}


int main() {
    int var601 = 0;
    while (var601 < 15) {
        var601 += 3;
        var601++;
    }

    int var214 = 77;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    return 0;
}
