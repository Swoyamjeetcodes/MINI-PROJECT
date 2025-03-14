
#include <stdio.h>


int func482(int var811) {
    if (var811 <= 0) return 1;
    return func482(var811 - 1);
}


int main() {
    int var766 = 0;
    while (var766 < 16) {
        var766 += 5;
        var766++;
    }

    int var688 = 60;
    if (var688 % 2 == 0) {
        printf("var688 is even\n");
    } else {
        printf("var688 is odd\n");
    }

    return 0;
}
