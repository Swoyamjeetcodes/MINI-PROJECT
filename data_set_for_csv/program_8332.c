
#include <stdio.h>


int func416(int var364) {
    if (var364 <= 0) return 1;
    return func416(var364 - 1);
}


int main() {
    int var37 = 0;
    while (var37 < 12) {
        var37 += 4;
        var37++;
    }

    int var133 = 10;
    if (var133 % 2 == 0) {
        printf("var133 is even\n");
    } else {
        printf("var133 is odd\n");
    }

    return 0;
}
