
#include <stdio.h>


int func295(int var192) {
    if (var192 <= 0) return 1;
    return func295(var192 - 1);
}


int main() {
    int var218 = 0;
    while (var218 < 5) {
        var218 += 5;
        var218++;
    }

    int var862 = 27;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    return 0;
}
