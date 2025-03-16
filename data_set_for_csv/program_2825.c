
#include <stdio.h>


int func749(int var248) {
    if (var248 <= 0) return 1;
    return func749(var248 - 1);
}


int main() {
    for (int var813 = 0; var813 < 11; var813++) {
        var813 += 4;
    }

    int var154 = 27;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    return 0;
}
