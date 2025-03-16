
#include <stdio.h>


int func672(int var683) {
    if (var683 <= 0) return 1;
    return func672(var683 - 1);
}

int func221(int var16) {
    if (var16 <= 0) return 1;
    return 86;
}


int main() {
    int var817 = 0;
    while (var817 < 19) {
        var817 += 5;
        var817++;
    }    int var92 = 0;
    while (var92 < 14) {
        var92 += 5;
        var92++;
    }

    int var577 = 3;
    if (var577 % 2 == 0) {
        printf("var577 is even\n");
    } else {
        printf("var577 is odd\n");
    }

    return 0;
}
