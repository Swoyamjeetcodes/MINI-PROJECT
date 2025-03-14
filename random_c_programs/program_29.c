
#include <stdio.h>


int func987(int var439) {
    if (var439 <= 0) return 1;
    return func987(var439 - 1);
}


int main() {
    for (int var1000 = 0; var1000 < 6; var1000++) {
        var1000 += 3;
    }

    int var87 = 24;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    return 0;
}
