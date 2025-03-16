
#include <stdio.h>


int func531(int var715) {
    if (var715 <= 0) return 1;
    return func531(var715 - 1);
}


int main() {
    int var3 = 0;
    while (var3 < 11) {
        var3 += 3;
        var3++;
    }

    int var276 = 30;
    if (var276 % 2 == 0) {
        printf("var276 is even\n");
    } else {
        printf("var276 is odd\n");
    }

    return 0;
}
