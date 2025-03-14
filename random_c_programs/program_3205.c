
#include <stdio.h>


int func221(int var495) {
    if (var495 <= 0) return 1;
    return func221(var495 - 1);
}


int main() {
    for (int var266 = 0; var266 < 16; var266++) {
        var266 += 5;
    }    int var820 = 0;
    while (var820 < 18) {
        var820 += 5;
        var820++;
    }    for (int var702 = 0; var702 < 20; var702++) {
        var702 += 2;
    }

    int var141 = 65;
    if (var141 % 2 == 0) {
        printf("var141 is even\n");
    } else {
        printf("var141 is odd\n");
    }

    return 0;
}
