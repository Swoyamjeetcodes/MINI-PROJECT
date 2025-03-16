
#include <stdio.h>


int func244(int var767) {
    if (var767 <= 0) return 1;
    return func244(var767 - 1);
}


int main() {
    for (int var662 = 0; var662 < 20; var662++) {
        var662 += 4;
    }    for (int var130 = 0; var130 < 13; var130++) {
        var130 += 5;
    }

    int var339 = 82;
    if (var339 % 2 == 0) {
        printf("var339 is even\n");
    } else {
        printf("var339 is odd\n");
    }

    return 0;
}
