
#include <stdio.h>


int func278(int var878) {
    if (var878 <= 0) return 1;
    return func278(var878 - 1);
}


int main() {
    for (int var622 = 0; var622 < 5; var622++) {
        var622 += 1;
    }

    int var739 = 93;
    if (var739 % 2 == 0) {
        printf("var739 is even\n");
    } else {
        printf("var739 is odd\n");
    }

    return 0;
}
