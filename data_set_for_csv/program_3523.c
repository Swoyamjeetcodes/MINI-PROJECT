
#include <stdio.h>


int func22(int var888) {
    if (var888 <= 0) return 1;
    return func22(var888 - 1);
}


int main() {
    int var432 = 0;
    while (var432 < 13) {
        var432 += 4;
        var432++;
    }

    int var727 = 50;
    if (var727 % 2 == 0) {
        printf("var727 is even\n");
    } else {
        printf("var727 is odd\n");
    }

    return 0;
}
