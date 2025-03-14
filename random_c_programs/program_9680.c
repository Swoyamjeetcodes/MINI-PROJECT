
#include <stdio.h>


int func200(int var245) {
    if (var245 <= 0) return 1;
    return func200(var245 - 1);
}


int main() {
    for (int var253 = 0; var253 < 19; var253++) {
        var253 += 5;
    }

    int var841 = 49;
    if (var841 % 2 == 0) {
        printf("var841 is even\n");
    } else {
        printf("var841 is odd\n");
    }

    return 0;
}
