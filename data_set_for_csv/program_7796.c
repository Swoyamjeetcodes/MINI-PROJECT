
#include <stdio.h>


int func456(int var642) {
    if (var642 <= 0) return 1;
    return func456(var642 - 1);
}


int main() {
    int var288 = 0;
    while (var288 < 8) {
        var288 += 2;
        var288++;
    }

    int var983 = 94;
    if (var983 % 2 == 0) {
        printf("var983 is even\n");
    } else {
        printf("var983 is odd\n");
    }

    return 0;
}
