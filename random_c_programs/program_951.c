
#include <stdio.h>


int func975(int var763) {
    if (var763 <= 0) return 1;
    return func975(var763 - 1);
}


int main() {
    int var134 = 0;
    while (var134 < 7) {
        var134 += 2;
        var134++;
    }

    int var982 = 5;
    if (var982 % 2 == 0) {
        printf("var982 is even\n");
    } else {
        printf("var982 is odd\n");
    }

    return 0;
}
