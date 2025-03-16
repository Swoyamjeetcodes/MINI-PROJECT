
#include <stdio.h>


int func590(int var567) {
    if (var567 <= 0) return 1;
    return func590(var567 - 1);
}


int main() {
    for (int var524 = 0; var524 < 10; var524++) {
        var524 += 5;
    }

    int var550 = 59;
    if (var550 % 2 == 0) {
        printf("var550 is even\n");
    } else {
        printf("var550 is odd\n");
    }

    return 0;
}
