
#include <stdio.h>


int func630(int var835) {
    if (var835 <= 0) return 1;
    return func630(var835 - 1);
}


int main() {
    for (int var862 = 0; var862 < 15; var862++) {
        var862 += 2;
    }

    int var881 = 17;
    if (var881 % 2 == 0) {
        printf("var881 is even\n");
    } else {
        printf("var881 is odd\n");
    }

    return 0;
}
