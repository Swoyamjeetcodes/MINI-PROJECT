
#include <stdio.h>


int func373(int var214) {
    if (var214 <= 0) return 1;
    return func373(var214 - 1);
}


int main() {
    for (int var239 = 0; var239 < 13; var239++) {
        var239 += 1;
    }

    int var524 = 15;
    if (var524 % 2 == 0) {
        printf("var524 is even\n");
    } else {
        printf("var524 is odd\n");
    }

    return 0;
}
