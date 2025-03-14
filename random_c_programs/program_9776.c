
#include <stdio.h>


int func5(int var127) {
    if (var127 <= 0) return 1;
    return func5(var127 - 1);
}


int main() {
    for (int var353 = 0; var353 < 14; var353++) {
        var353 += 4;
    }

    int var248 = 89;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
