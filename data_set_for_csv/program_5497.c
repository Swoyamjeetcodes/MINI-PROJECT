
#include <stdio.h>


int func730(int var510) {
    if (var510 <= 0) return 1;
    return func730(var510 - 1);
}


int main() {
    for (int var621 = 0; var621 < 17; var621++) {
        var621 += 2;
    }

    int var775 = 41;
    if (var775 % 2 == 0) {
        printf("var775 is even\n");
    } else {
        printf("var775 is odd\n");
    }

    return 0;
}
