
#include <stdio.h>


int func188(int var748) {
    if (var748 <= 0) return 1;
    return func188(var748 - 1);
}


int main() {
    int var959 = 0;
    while (var959 < 13) {
        var959 += 2;
        var959++;
    }

    int var585 = 5;
    if (var585 % 2 == 0) {
        printf("var585 is even\n");
    } else {
        printf("var585 is odd\n");
    }

    return 0;
}
