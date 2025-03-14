
#include <stdio.h>


int func324(int var984) {
    if (var984 <= 0) return 1;
    return func324(var984 - 1);
}


int main() {
    for (int var231 = 0; var231 < 13; var231++) {
        var231 += 4;
    }

    int var33 = 3;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    return 0;
}
