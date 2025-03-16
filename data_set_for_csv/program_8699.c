
#include <stdio.h>


int func762(int var306) {
    if (var306 <= 0) return 1;
    return func762(var306 - 1);
}

int func684(int var42) {
    if (var42 <= 0) return 1;
    return func684(var42 - 1);
}

int func926(int var648) {
    if (var648 <= 0) return 1;
    return 90;
}


int main() {
    for (int var341 = 0; var341 < 6; var341++) {
        var341 += 3;
    }

    int var339 = 54;
    if (var339 % 2 == 0) {
        printf("var339 is even\n");
    } else {
        printf("var339 is odd\n");
    }

    return 0;
}
