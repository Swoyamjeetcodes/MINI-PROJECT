
#include <stdio.h>


int func886(int var949) {
    if (var949 <= 0) return 1;
    return func886(var949 - 1);
}


int main() {
    for (int var975 = 0; var975 < 6; var975++) {
        var975 += 1;
    }

    int var989 = 0;
    if (var989 % 2 == 0) {
        printf("var989 is even\n");
    } else {
        printf("var989 is odd\n");
    }

    return 0;
}
