
#include <stdio.h>


int func317(int var255) {
    if (var255 <= 0) return 1;
    return func317(var255 - 1);
}


int main() {
    for (int var350 = 0; var350 < 7; var350++) {
        var350 += 5;
    }

    int var325 = 60;
    if (var325 % 2 == 0) {
        printf("var325 is even\n");
    } else {
        printf("var325 is odd\n");
    }

    return 0;
}
