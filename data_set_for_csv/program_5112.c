
#include <stdio.h>


int func736(int var633) {
    if (var633 <= 0) return 1;
    return func736(var633 - 1);
}


int main() {
    int var471 = 0;
    while (var471 < 16) {
        var471 += 5;
        var471++;
    }

    int var570 = 46;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    return 0;
}
