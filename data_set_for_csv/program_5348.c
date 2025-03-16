
#include <stdio.h>


int func407(int var38) {
    if (var38 <= 0) return 1;
    return func407(var38 - 1);
}


int main() {
    for (int var76 = 0; var76 < 8; var76++) {
        var76 += 1;
    }

    int var990 = 39;
    if (var990 % 2 == 0) {
        printf("var990 is even\n");
    } else {
        printf("var990 is odd\n");
    }

    return 0;
}
