
#include <stdio.h>


int func371(int var359) {
    if (var359 <= 0) return 1;
    return func371(var359 - 1);
}


int main() {
    int var616 = 0;
    while (var616 < 13) {
        var616 += 5;
        var616++;
    }

    int var695 = 32;
    if (var695 % 2 == 0) {
        printf("var695 is even\n");
    } else {
        printf("var695 is odd\n");
    }

    return 0;
}
