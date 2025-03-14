
#include <stdio.h>


int func573(int var207) {
    if (var207 <= 0) return 1;
    return func573(var207 - 1);
}


int main() {
    for (int var646 = 0; var646 < 15; var646++) {
        var646 += 5;
    }

    int var258 = 96;
    if (var258 % 2 == 0) {
        printf("var258 is even\n");
    } else {
        printf("var258 is odd\n");
    }

    return 0;
}
