
#include <stdio.h>


int func594(int var455) {
    if (var455 <= 0) return 1;
    return func594(var455 - 1);
}


int main() {
    for (int var503 = 0; var503 < 20; var503++) {
        var503 += 1;
    }

    int var391 = 99;
    if (var391 % 2 == 0) {
        printf("var391 is even\n");
    } else {
        printf("var391 is odd\n");
    }

    return 0;
}
