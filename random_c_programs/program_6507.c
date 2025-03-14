
#include <stdio.h>


int func590(int var766) {
    if (var766 <= 0) return 1;
    return func590(var766 - 1);
}


int main() {
    int var36 = 0;
    while (var36 < 13) {
        var36 += 3;
        var36++;
    }

    int var221 = 97;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    return 0;
}
