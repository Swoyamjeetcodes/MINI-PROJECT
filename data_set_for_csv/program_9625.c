
#include <stdio.h>


int func200(int var469) {
    if (var469 <= 0) return 1;
    return func200(var469 - 1);
}


int main() {
    for (int var568 = 0; var568 < 12; var568++) {
        var568 += 1;
    }

    int var540 = 9;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    return 0;
}
