
#include <stdio.h>


int func127(int var818) {
    if (var818 <= 0) return 1;
    return func127(var818 - 1);
}


int main() {
    for (int var391 = 0; var391 < 16; var391++) {
        var391 += 4;
    }

    int var836 = 56;
    if (var836 % 2 == 0) {
        printf("var836 is even\n");
    } else {
        printf("var836 is odd\n");
    }

    return 0;
}
