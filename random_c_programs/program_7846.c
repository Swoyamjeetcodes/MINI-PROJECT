
#include <stdio.h>


int func265(int var111) {
    if (var111 <= 0) return 1;
    return func265(var111 - 1);
}


int main() {
    int var331 = 0;
    while (var331 < 8) {
        var331 += 1;
        var331++;
    }

    int var649 = 59;
    if (var649 % 2 == 0) {
        printf("var649 is even\n");
    } else {
        printf("var649 is odd\n");
    }

    return 0;
}
