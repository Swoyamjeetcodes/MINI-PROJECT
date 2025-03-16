
#include <stdio.h>


int func507(int var201) {
    if (var201 <= 0) return 1;
    return func507(var201 - 1);
}


int main() {
    for (int var640 = 0; var640 < 13; var640++) {
        var640 += 1;
    }

    int var115 = 94;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    return 0;
}
