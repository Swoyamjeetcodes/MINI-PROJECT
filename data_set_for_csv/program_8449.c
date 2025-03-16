
#include <stdio.h>


int func681(int var649) {
    if (var649 <= 0) return 1;
    return func681(var649 - 1);
}


int main() {
    int var697 = 0;
    while (var697 < 9) {
        var697 += 2;
        var697++;
    }

    int var149 = 55;
    if (var149 % 2 == 0) {
        printf("var149 is even\n");
    } else {
        printf("var149 is odd\n");
    }

    return 0;
}
