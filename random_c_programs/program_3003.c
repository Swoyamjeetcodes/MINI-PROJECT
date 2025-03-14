
#include <stdio.h>


int func245(int var697) {
    if (var697 <= 0) return 1;
    return func245(var697 - 1);
}


int main() {
    for (int var663 = 0; var663 < 6; var663++) {
        var663 += 1;
    }

    int var868 = 87;
    if (var868 % 2 == 0) {
        printf("var868 is even\n");
    } else {
        printf("var868 is odd\n");
    }

    return 0;
}
