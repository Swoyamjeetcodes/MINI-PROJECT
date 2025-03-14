
#include <stdio.h>


int func844(int var722) {
    if (var722 <= 0) return 1;
    return func844(var722 - 1);
}


int main() {
    for (int var143 = 0; var143 < 10; var143++) {
        var143 += 3;
    }

    int var748 = 93;
    if (var748 % 2 == 0) {
        printf("var748 is even\n");
    } else {
        printf("var748 is odd\n");
    }

    return 0;
}
