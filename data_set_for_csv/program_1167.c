
#include <stdio.h>


int func261(int var335) {
    if (var335 <= 0) return 1;
    return func261(var335 - 1);
}


int main() {
    for (int var53 = 0; var53 < 14; var53++) {
        var53 += 4;
    }

    int var541 = 33;
    if (var541 % 2 == 0) {
        printf("var541 is even\n");
    } else {
        printf("var541 is odd\n");
    }

    return 0;
}
