
#include <stdio.h>


int func578(int var8) {
    if (var8 <= 0) return 1;
    return func578(var8 - 1);
}


int main() {
    for (int var165 = 0; var165 < 15; var165++) {
        var165 += 3;
    }

    int var310 = 99;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    return 0;
}
