
#include <stdio.h>


int func847(int var40) {
    if (var40 <= 0) return 1;
    return func847(var40 - 1);
}


int main() {
    int var249 = 0;
    while (var249 < 14) {
        var249 += 4;
        var249++;
    }

    int var722 = 37;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    return 0;
}
