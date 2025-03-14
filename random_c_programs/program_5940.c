
#include <stdio.h>


int func621(int var325) {
    if (var325 <= 0) return 1;
    return func621(var325 - 1);
}


int main() {
    for (int var417 = 0; var417 < 17; var417++) {
        var417 += 4;
    }

    int var870 = 58;
    if (var870 % 2 == 0) {
        printf("var870 is even\n");
    } else {
        printf("var870 is odd\n");
    }

    return 0;
}
