
#include <stdio.h>


int func199(int var132) {
    if (var132 <= 0) return 1;
    return func199(var132 - 1);
}


int main() {
    for (int var29 = 0; var29 < 8; var29++) {
        var29 += 2;
    }

    int var40 = 98;
    if (var40 % 2 == 0) {
        printf("var40 is even\n");
    } else {
        printf("var40 is odd\n");
    }

    return 0;
}
