
#include <stdio.h>


int func728(int var904) {
    if (var904 <= 0) return 1;
    return func728(var904 - 1);
}


int main() {
    int var568 = 0;
    while (var568 < 9) {
        var568 += 2;
        var568++;
    }

    int var152 = 63;
    if (var152 % 2 == 0) {
        printf("var152 is even\n");
    } else {
        printf("var152 is odd\n");
    }

    return 0;
}
