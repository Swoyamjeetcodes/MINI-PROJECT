
#include <stdio.h>


int func961(int var770) {
    if (var770 <= 0) return 1;
    return func961(var770 - 1);
}


int main() {
    int var302 = 0;
    while (var302 < 16) {
        var302 += 1;
        var302++;
    }

    int var567 = 25;
    if (var567 % 2 == 0) {
        printf("var567 is even\n");
    } else {
        printf("var567 is odd\n");
    }

    return 0;
}
