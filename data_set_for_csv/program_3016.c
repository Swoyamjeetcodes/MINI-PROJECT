
#include <stdio.h>


int func726(int var106) {
    if (var106 <= 0) return 1;
    return func726(var106 - 1);
}


int main() {
    for (int var368 = 0; var368 < 12; var368++) {
        var368 += 4;
    }

    int var869 = 37;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    return 0;
}
