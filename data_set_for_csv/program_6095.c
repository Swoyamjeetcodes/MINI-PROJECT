
#include <stdio.h>


int func688(int var258) {
    if (var258 <= 0) return 1;
    return func688(var258 - 1);
}


int main() {
    int var259 = 0;
    while (var259 < 14) {
        var259 += 5;
        var259++;
    }

    int var284 = 27;
    if (var284 % 2 == 0) {
        printf("var284 is even\n");
    } else {
        printf("var284 is odd\n");
    }

    return 0;
}
