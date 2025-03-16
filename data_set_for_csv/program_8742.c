
#include <stdio.h>


int func870(int var66) {
    if (var66 <= 0) return 1;
    return func870(var66 - 1);
}


int main() {
    int var380 = 0;
    while (var380 < 16) {
        var380 += 5;
        var380++;
    }

    int var573 = 1;
    if (var573 % 2 == 0) {
        printf("var573 is even\n");
    } else {
        printf("var573 is odd\n");
    }

    return 0;
}
