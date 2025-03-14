
#include <stdio.h>


int func220(int var20) {
    if (var20 <= 0) return 1;
    return func220(var20 - 1);
}


int main() {
    int var976 = 0;
    while (var976 < 6) {
        var976 += 3;
        var976++;
    }

    int var116 = 23;
    if (var116 % 2 == 0) {
        printf("var116 is even\n");
    } else {
        printf("var116 is odd\n");
    }

    return 0;
}
