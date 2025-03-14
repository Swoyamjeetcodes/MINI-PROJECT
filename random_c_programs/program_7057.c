
#include <stdio.h>


int func969(int var47) {
    if (var47 <= 0) return 1;
    return func969(var47 - 1);
}


int main() {
    for (int var983 = 0; var983 < 14; var983++) {
        var983 += 4;
    }

    int var256 = 90;
    if (var256 % 2 == 0) {
        printf("var256 is even\n");
    } else {
        printf("var256 is odd\n");
    }

    return 0;
}
