
#include <stdio.h>


int func230(int var121) {
    if (var121 <= 0) return 1;
    return func230(var121 - 1);
}


int main() {
    int var585 = 0;
    while (var585 < 10) {
        var585 += 5;
        var585++;
    }

    int var662 = 23;
    if (var662 % 2 == 0) {
        printf("var662 is even\n");
    } else {
        printf("var662 is odd\n");
    }

    return 0;
}
