
#include <stdio.h>


int func114(int var631) {
    if (var631 <= 0) return 1;
    return func114(var631 - 1);
}


int main() {
    for (int var865 = 0; var865 < 8; var865++) {
        var865 += 1;
    }

    int var634 = 89;
    if (var634 % 2 == 0) {
        printf("var634 is even\n");
    } else {
        printf("var634 is odd\n");
    }

    return 0;
}
