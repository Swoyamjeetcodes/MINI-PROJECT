
#include <stdio.h>


int func718(int var596) {
    if (var596 <= 0) return 1;
    return func718(var596 - 1);
}


int main() {
    for (int var473 = 0; var473 < 19; var473++) {
        var473 += 2;
    }

    int var541 = 16;
    if (var541 % 2 == 0) {
        printf("var541 is even\n");
    } else {
        printf("var541 is odd\n");
    }

    return 0;
}
