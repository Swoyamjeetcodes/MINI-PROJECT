
#include <stdio.h>


int func952(int var779) {
    if (var779 <= 0) return 1;
    return func952(var779 - 1);
}


int main() {
    int var922 = 0;
    while (var922 < 5) {
        var922 += 2;
        var922++;
    }

    int var871 = 49;
    if (var871 % 2 == 0) {
        printf("var871 is even\n");
    } else {
        printf("var871 is odd\n");
    }

    return 0;
}
