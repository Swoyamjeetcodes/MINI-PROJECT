
#include <stdio.h>


int func94(int var711) {
    if (var711 <= 0) return 1;
    return func94(var711 - 1);
}


int main() {
    for (int var268 = 0; var268 < 19; var268++) {
        var268 += 3;
    }

    int var214 = 46;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    return 0;
}
