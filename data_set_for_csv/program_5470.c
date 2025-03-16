
#include <stdio.h>


int func229(int var735) {
    if (var735 <= 0) return 1;
    return func229(var735 - 1);
}


int main() {
    for (int var373 = 0; var373 < 19; var373++) {
        var373 += 1;
    }

    int var663 = 21;
    if (var663 % 2 == 0) {
        printf("var663 is even\n");
    } else {
        printf("var663 is odd\n");
    }

    return 0;
}
