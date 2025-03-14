
#include <stdio.h>


int func755(int var134) {
    if (var134 <= 0) return 1;
    return func755(var134 - 1);
}


int main() {
    int var638 = 0;
    while (var638 < 15) {
        var638 += 3;
        var638++;
    }

    int var835 = 88;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    return 0;
}
