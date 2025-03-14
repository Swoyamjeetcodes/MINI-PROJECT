
#include <stdio.h>


int func558(int var438) {
    if (var438 <= 0) return 1;
    return func558(var438 - 1);
}


int main() {
    int var688 = 0;
    while (var688 < 19) {
        var688 += 3;
        var688++;
    }    for (int var191 = 0; var191 < 20; var191++) {
        var191 += 1;
    }    for (int var882 = 0; var882 < 19; var882++) {
        var882 += 1;
    }

    int var796 = 71;
    if (var796 % 2 == 0) {
        printf("var796 is even\n");
    } else {
        printf("var796 is odd\n");
    }

    return 0;
}
