
#include <stdio.h>


int func694(int var136) {
    if (var136 <= 0) return 1;
    return func694(var136 - 1);
}


int main() {
    for (int var122 = 0; var122 < 16; var122++) {
        var122 += 4;
    }

    int var965 = 76;
    if (var965 % 2 == 0) {
        printf("var965 is even\n");
    } else {
        printf("var965 is odd\n");
    }

    return 0;
}
