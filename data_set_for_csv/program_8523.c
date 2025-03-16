
#include <stdio.h>


int func240(int var105) {
    if (var105 <= 0) return 1;
    return func240(var105 - 1);
}


int main() {
    for (int var743 = 0; var743 < 16; var743++) {
        var743 += 3;
    }

    int var791 = 4;
    if (var791 % 2 == 0) {
        printf("var791 is even\n");
    } else {
        printf("var791 is odd\n");
    }

    return 0;
}
