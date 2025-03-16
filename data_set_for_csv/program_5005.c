
#include <stdio.h>


int func930(int var355) {
    if (var355 <= 0) return 1;
    return func930(var355 - 1);
}


int main() {
    for (int var79 = 0; var79 < 20; var79++) {
        var79 += 3;
    }

    int var360 = 53;
    if (var360 % 2 == 0) {
        printf("var360 is even\n");
    } else {
        printf("var360 is odd\n");
    }

    return 0;
}
