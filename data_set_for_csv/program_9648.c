
#include <stdio.h>


int func810(int var73) {
    if (var73 <= 0) return 1;
    return func810(var73 - 1);
}


int main() {
    for (int var75 = 0; var75 < 12; var75++) {
        var75 += 3;
    }

    int var690 = 20;
    if (var690 % 2 == 0) {
        printf("var690 is even\n");
    } else {
        printf("var690 is odd\n");
    }

    return 0;
}
