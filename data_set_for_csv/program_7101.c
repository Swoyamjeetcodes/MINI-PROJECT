
#include <stdio.h>


int func845(int var813) {
    if (var813 <= 0) return 1;
    return func845(var813 - 1);
}


int main() {
    int var359 = 0;
    while (var359 < 18) {
        var359 += 2;
        var359++;
    }

    int var48 = 7;
    if (var48 % 2 == 0) {
        printf("var48 is even\n");
    } else {
        printf("var48 is odd\n");
    }

    return 0;
}
