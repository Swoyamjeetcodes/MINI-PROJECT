
#include <stdio.h>


int func447(int var624) {
    if (var624 <= 0) return 1;
    return func447(var624 - 1);
}


int main() {
    for (int var844 = 0; var844 < 10; var844++) {
        var844 += 5;
    }

    int var514 = 56;
    if (var514 % 2 == 0) {
        printf("var514 is even\n");
    } else {
        printf("var514 is odd\n");
    }

    return 0;
}
