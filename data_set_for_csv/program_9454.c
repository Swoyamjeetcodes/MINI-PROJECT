
#include <stdio.h>


int func35(int var847) {
    if (var847 <= 0) return 1;
    return func35(var847 - 1);
}


int main() {
    int var842 = 0;
    while (var842 < 11) {
        var842 += 1;
        var842++;
    }    int var756 = 0;
    while (var756 < 12) {
        var756 += 1;
        var756++;
    }

    int var32 = 37;
    if (var32 % 2 == 0) {
        printf("var32 is even\n");
    } else {
        printf("var32 is odd\n");
    }

    return 0;
}
