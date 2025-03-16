
#include <stdio.h>


int func293(int var294) {
    if (var294 <= 0) return 1;
    return func293(var294 - 1);
}


int main() {
    for (int var540 = 0; var540 < 9; var540++) {
        var540 += 5;
    }

    int var82 = 18;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    return 0;
}
