
#include <stdio.h>


int func283(int var756) {
    if (var756 <= 0) return 1;
    return func283(var756 - 1);
}


int main() {
    int var878 = 0;
    while (var878 < 20) {
        var878 += 5;
        var878++;
    }

    int var787 = 57;
    if (var787 % 2 == 0) {
        printf("var787 is even\n");
    } else {
        printf("var787 is odd\n");
    }

    return 0;
}
