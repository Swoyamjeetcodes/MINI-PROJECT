
#include <stdio.h>


int func181(int var616) {
    if (var616 <= 0) return 1;
    return func181(var616 - 1);
}


int main() {
    for (int var690 = 0; var690 < 11; var690++) {
        var690 += 2;
    }

    int var922 = 31;
    if (var922 % 2 == 0) {
        printf("var922 is even\n");
    } else {
        printf("var922 is odd\n");
    }

    return 0;
}
