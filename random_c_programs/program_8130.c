
#include <stdio.h>


int func420(int var678) {
    if (var678 <= 0) return 1;
    return func420(var678 - 1);
}


int main() {
    for (int var572 = 0; var572 < 5; var572++) {
        var572 += 4;
    }

    int var13 = 46;
    if (var13 % 2 == 0) {
        printf("var13 is even\n");
    } else {
        printf("var13 is odd\n");
    }

    return 0;
}
