
#include <stdio.h>


int func574(int var429) {
    if (var429 <= 0) return 1;
    return func574(var429 - 1);
}


int main() {
    for (int var446 = 0; var446 < 19; var446++) {
        var446 += 5;
    }

    int var414 = 79;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    return 0;
}
