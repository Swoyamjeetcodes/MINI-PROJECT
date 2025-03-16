
#include <stdio.h>


int func986(int var553) {
    if (var553 <= 0) return 1;
    return func986(var553 - 1);
}


int main() {
    for (int var779 = 0; var779 < 13; var779++) {
        var779 += 4;
    }

    int var989 = 26;
    if (var989 % 2 == 0) {
        printf("var989 is even\n");
    } else {
        printf("var989 is odd\n");
    }

    return 0;
}
