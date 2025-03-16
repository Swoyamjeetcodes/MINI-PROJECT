
#include <stdio.h>


int func248(int var783) {
    if (var783 <= 0) return 1;
    return func248(var783 - 1);
}


int main() {
    for (int var865 = 0; var865 < 8; var865++) {
        var865 += 3;
    }

    int var935 = 95;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    return 0;
}
