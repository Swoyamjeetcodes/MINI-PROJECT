
#include <stdio.h>


int func189(int var21) {
    if (var21 <= 0) return 1;
    return func189(var21 - 1);
}


int main() {
    for (int var145 = 0; var145 < 6; var145++) {
        var145 += 5;
    }

    int var404 = 59;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    return 0;
}
