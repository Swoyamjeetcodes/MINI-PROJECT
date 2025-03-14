
#include <stdio.h>


int func765(int var314) {
    if (var314 <= 0) return 1;
    return func765(var314 - 1);
}


int main() {
    for (int var42 = 0; var42 < 19; var42++) {
        var42 += 2;
    }

    int var664 = 51;
    if (var664 % 2 == 0) {
        printf("var664 is even\n");
    } else {
        printf("var664 is odd\n");
    }

    return 0;
}
