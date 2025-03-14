
#include <stdio.h>


int func261(int var192) {
    if (var192 <= 0) return 1;
    return func261(var192 - 1);
}


int main() {
    for (int var604 = 0; var604 < 10; var604++) {
        var604 += 2;
    }

    int var7 = 29;
    if (var7 % 2 == 0) {
        printf("var7 is even\n");
    } else {
        printf("var7 is odd\n");
    }

    return 0;
}
