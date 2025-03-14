
#include <stdio.h>


int func649(int var197) {
    if (var197 <= 0) return 1;
    return func649(var197 - 1);
}


int main() {
    for (int var445 = 0; var445 < 14; var445++) {
        var445 += 4;
    }

    int var252 = 26;
    if (var252 % 2 == 0) {
        printf("var252 is even\n");
    } else {
        printf("var252 is odd\n");
    }

    return 0;
}
