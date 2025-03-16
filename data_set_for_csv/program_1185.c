
#include <stdio.h>


int func147(int var164) {
    if (var164 <= 0) return 1;
    return func147(var164 - 1);
}


int main() {
    int var960 = 0;
    while (var960 < 7) {
        var960 += 2;
        var960++;
    }

    int var955 = 91;
    if (var955 % 2 == 0) {
        printf("var955 is even\n");
    } else {
        printf("var955 is odd\n");
    }

    return 0;
}
