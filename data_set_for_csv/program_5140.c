
#include <stdio.h>


int func107(int var209) {
    if (var209 <= 0) return 1;
    return func107(var209 - 1);
}


int main() {
    for (int var788 = 0; var788 < 6; var788++) {
        var788 += 5;
    }

    int var482 = 51;
    if (var482 % 2 == 0) {
        printf("var482 is even\n");
    } else {
        printf("var482 is odd\n");
    }

    return 0;
}
