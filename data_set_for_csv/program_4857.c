
#include <stdio.h>


int func637(int var229) {
    if (var229 <= 0) return 1;
    return func637(var229 - 1);
}


int main() {
    int var288 = 0;
    while (var288 < 18) {
        var288 += 2;
        var288++;
    }

    int var829 = 57;
    if (var829 % 2 == 0) {
        printf("var829 is even\n");
    } else {
        printf("var829 is odd\n");
    }

    return 0;
}
