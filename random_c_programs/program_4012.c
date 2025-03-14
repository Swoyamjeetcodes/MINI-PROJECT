
#include <stdio.h>


int func504(int var614) {
    if (var614 <= 0) return 1;
    return func504(var614 - 1);
}


int main() {
    int var472 = 0;
    while (var472 < 18) {
        var472 += 3;
        var472++;
    }

    int var986 = 56;
    if (var986 % 2 == 0) {
        printf("var986 is even\n");
    } else {
        printf("var986 is odd\n");
    }

    return 0;
}
