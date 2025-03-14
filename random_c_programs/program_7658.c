
#include <stdio.h>


int func835(int var423) {
    if (var423 <= 0) return 1;
    return func835(var423 - 1);
}


int main() {
    for (int var918 = 0; var918 < 6; var918++) {
        var918 += 5;
    }

    int var20 = 44;
    if (var20 % 2 == 0) {
        printf("var20 is even\n");
    } else {
        printf("var20 is odd\n");
    }

    return 0;
}
