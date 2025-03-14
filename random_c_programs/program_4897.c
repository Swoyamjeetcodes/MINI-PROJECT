
#include <stdio.h>


int func825(int var87) {
    if (var87 <= 0) return 1;
    return func825(var87 - 1);
}


int main() {
    for (int var66 = 0; var66 < 20; var66++) {
        var66 += 4;
    }

    int var434 = 73;
    if (var434 % 2 == 0) {
        printf("var434 is even\n");
    } else {
        printf("var434 is odd\n");
    }

    return 0;
}
