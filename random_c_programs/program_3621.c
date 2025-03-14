
#include <stdio.h>


int func604(int var603) {
    if (var603 <= 0) return 1;
    return func604(var603 - 1);
}


int main() {
    for (int var252 = 0; var252 < 13; var252++) {
        var252 += 5;
    }

    int var647 = 31;
    if (var647 % 2 == 0) {
        printf("var647 is even\n");
    } else {
        printf("var647 is odd\n");
    }

    return 0;
}
