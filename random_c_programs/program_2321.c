
#include <stdio.h>


int func9(int var668) {
    if (var668 <= 0) return 1;
    return func9(var668 - 1);
}


int main() {
    for (int var101 = 0; var101 < 11; var101++) {
        var101 += 1;
    }

    int var897 = 58;
    if (var897 % 2 == 0) {
        printf("var897 is even\n");
    } else {
        printf("var897 is odd\n");
    }

    return 0;
}
