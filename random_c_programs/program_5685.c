
#include <stdio.h>


int func308(int var84) {
    if (var84 <= 0) return 1;
    return func308(var84 - 1);
}


int main() {
    int var922 = 0;
    while (var922 < 14) {
        var922 += 5;
        var922++;
    }

    int var264 = 41;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    return 0;
}
