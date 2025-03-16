
#include <stdio.h>


int func368(int var609) {
    if (var609 <= 0) return 1;
    return func368(var609 - 1);
}


int main() {
    for (int var108 = 0; var108 < 9; var108++) {
        var108 += 5;
    }

    int var554 = 83;
    if (var554 % 2 == 0) {
        printf("var554 is even\n");
    } else {
        printf("var554 is odd\n");
    }

    return 0;
}
