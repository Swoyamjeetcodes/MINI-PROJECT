
#include <stdio.h>


int func678(int var669) {
    if (var669 <= 0) return 1;
    return func678(var669 - 1);
}


int main() {
    for (int var82 = 0; var82 < 13; var82++) {
        var82 += 4;
    }

    int var881 = 35;
    if (var881 % 2 == 0) {
        printf("var881 is even\n");
    } else {
        printf("var881 is odd\n");
    }

    return 0;
}
