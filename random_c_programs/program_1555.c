
#include <stdio.h>


int func98(int var718) {
    if (var718 <= 0) return 1;
    return func98(var718 - 1);
}


int main() {
    for (int var918 = 0; var918 < 11; var918++) {
        var918 += 5;
    }

    int var426 = 4;
    if (var426 % 2 == 0) {
        printf("var426 is even\n");
    } else {
        printf("var426 is odd\n");
    }

    return 0;
}
