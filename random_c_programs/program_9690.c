
#include <stdio.h>


int func530(int var325) {
    if (var325 <= 0) return 1;
    return func530(var325 - 1);
}


int main() {
    for (int var798 = 0; var798 < 15; var798++) {
        var798 += 5;
    }

    int var777 = 47;
    if (var777 % 2 == 0) {
        printf("var777 is even\n");
    } else {
        printf("var777 is odd\n");
    }

    return 0;
}
