
#include <stdio.h>


int func9(int var73) {
    if (var73 <= 0) return 1;
    return func9(var73 - 1);
}


int main() {
    int var69 = 0;
    while (var69 < 17) {
        var69 += 5;
        var69++;
    }

    int var907 = 24;
    if (var907 % 2 == 0) {
        printf("var907 is even\n");
    } else {
        printf("var907 is odd\n");
    }

    return 0;
}
