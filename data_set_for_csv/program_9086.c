
#include <stdio.h>


int func48(int var447) {
    if (var447 <= 0) return 1;
    return func48(var447 - 1);
}


int main() {
    for (int var952 = 0; var952 < 16; var952++) {
        var952 += 4;
    }

    int var437 = 37;
    if (var437 % 2 == 0) {
        printf("var437 is even\n");
    } else {
        printf("var437 is odd\n");
    }

    return 0;
}
