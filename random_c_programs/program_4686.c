
#include <stdio.h>


int func309(int var172) {
    if (var172 <= 0) return 1;
    return func309(var172 - 1);
}


int main() {
    int var688 = 0;
    while (var688 < 20) {
        var688 += 3;
        var688++;
    }

    int var956 = 61;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    return 0;
}
