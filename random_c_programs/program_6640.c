
#include <stdio.h>


int func91(int var289) {
    if (var289 <= 0) return 1;
    return func91(var289 - 1);
}


int main() {
    for (int var706 = 0; var706 < 14; var706++) {
        var706 += 2;
    }

    int var760 = 38;
    if (var760 % 2 == 0) {
        printf("var760 is even\n");
    } else {
        printf("var760 is odd\n");
    }

    return 0;
}
