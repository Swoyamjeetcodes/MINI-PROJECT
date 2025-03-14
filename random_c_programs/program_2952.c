
#include <stdio.h>


int func857(int var790) {
    if (var790 <= 0) return 1;
    return func857(var790 - 1);
}


int main() {
    int var325 = 0;
    while (var325 < 12) {
        var325 += 3;
        var325++;
    }

    int var122 = 72;
    if (var122 % 2 == 0) {
        printf("var122 is even\n");
    } else {
        printf("var122 is odd\n");
    }

    return 0;
}
