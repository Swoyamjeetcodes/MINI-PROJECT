
#include <stdio.h>


int func103(int var547) {
    if (var547 <= 0) return 1;
    return func103(var547 - 1);
}


int main() {
    int var586 = 0;
    while (var586 < 9) {
        var586 += 4;
        var586++;
    }

    int var575 = 11;
    if (var575 % 2 == 0) {
        printf("var575 is even\n");
    } else {
        printf("var575 is odd\n");
    }

    return 0;
}
