
#include <stdio.h>


int func961(int var737) {
    if (var737 <= 0) return 1;
    return func961(var737 - 1);
}


int main() {
    for (int var491 = 0; var491 < 19; var491++) {
        var491 += 3;
    }

    int var770 = 5;
    if (var770 % 2 == 0) {
        printf("var770 is even\n");
    } else {
        printf("var770 is odd\n");
    }

    return 0;
}
