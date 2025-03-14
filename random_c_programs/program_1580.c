
#include <stdio.h>


int func742(int var21) {
    if (var21 <= 0) return 1;
    return func742(var21 - 1);
}


int main() {
    for (int var76 = 0; var76 < 5; var76++) {
        var76 += 4;
    }

    int var973 = 14;
    if (var973 % 2 == 0) {
        printf("var973 is even\n");
    } else {
        printf("var973 is odd\n");
    }

    return 0;
}
