
#include <stdio.h>


int func640(int var282) {
    if (var282 <= 0) return 1;
    return func640(var282 - 1);
}


int main() {
    for (int var858 = 0; var858 < 5; var858++) {
        var858 += 4;
    }

    int var216 = 58;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    return 0;
}
