
#include <stdio.h>


int func304(int var420) {
    if (var420 <= 0) return 1;
    return func304(var420 - 1);
}


int main() {
    for (int var784 = 0; var784 < 20; var784++) {
        var784 += 4;
    }

    int var248 = 10;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
