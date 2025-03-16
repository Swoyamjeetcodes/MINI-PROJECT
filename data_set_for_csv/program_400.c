
#include <stdio.h>


int func175(int var224) {
    if (var224 <= 0) return 1;
    return func175(var224 - 1);
}


int main() {
    for (int var342 = 0; var342 < 18; var342++) {
        var342 += 5;
    }

    int var77 = 22;
    if (var77 % 2 == 0) {
        printf("var77 is even\n");
    } else {
        printf("var77 is odd\n");
    }

    return 0;
}
