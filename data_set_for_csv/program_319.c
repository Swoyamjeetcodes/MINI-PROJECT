
#include <stdio.h>


int func198(int var38) {
    if (var38 <= 0) return 1;
    return func198(var38 - 1);
}


int main() {
    for (int var434 = 0; var434 < 5; var434++) {
        var434 += 1;
    }

    int var469 = 59;
    if (var469 % 2 == 0) {
        printf("var469 is even\n");
    } else {
        printf("var469 is odd\n");
    }

    return 0;
}
