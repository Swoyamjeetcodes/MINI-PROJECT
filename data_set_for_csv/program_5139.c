
#include <stdio.h>


int func692(int var826) {
    if (var826 <= 0) return 1;
    return func692(var826 - 1);
}


int main() {
    for (int var210 = 0; var210 < 14; var210++) {
        var210 += 5;
    }

    int var324 = 52;
    if (var324 % 2 == 0) {
        printf("var324 is even\n");
    } else {
        printf("var324 is odd\n");
    }

    return 0;
}
