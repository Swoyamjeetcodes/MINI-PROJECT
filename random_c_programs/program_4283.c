
#include <stdio.h>


int func795(int var622) {
    if (var622 <= 0) return 1;
    return func795(var622 - 1);
}


int main() {
    for (int var659 = 0; var659 < 7; var659++) {
        var659 += 5;
    }

    int var423 = 97;
    if (var423 % 2 == 0) {
        printf("var423 is even\n");
    } else {
        printf("var423 is odd\n");
    }

    return 0;
}
