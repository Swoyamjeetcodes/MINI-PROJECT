
#include <stdio.h>


int func991(int var957) {
    if (var957 <= 0) return 1;
    return func991(var957 - 1);
}


int main() {
    for (int var371 = 0; var371 < 14; var371++) {
        var371 += 2;
    }

    int var14 = 93;
    if (var14 % 2 == 0) {
        printf("var14 is even\n");
    } else {
        printf("var14 is odd\n");
    }

    return 0;
}
