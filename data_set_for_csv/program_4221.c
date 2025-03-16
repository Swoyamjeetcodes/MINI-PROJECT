
#include <stdio.h>


int func898(int var145) {
    if (var145 <= 0) return 1;
    return func898(var145 - 1);
}


int main() {
    int var325 = 0;
    while (var325 < 13) {
        var325 += 1;
        var325++;
    }

    int var293 = 31;
    if (var293 % 2 == 0) {
        printf("var293 is even\n");
    } else {
        printf("var293 is odd\n");
    }

    return 0;
}
