
#include <stdio.h>


int func414(int var613) {
    if (var613 <= 0) return 1;
    return func414(var613 - 1);
}


int main() {
    for (int var839 = 0; var839 < 20; var839++) {
        var839 += 5;
    }

    int var119 = 51;
    if (var119 % 2 == 0) {
        printf("var119 is even\n");
    } else {
        printf("var119 is odd\n");
    }

    return 0;
}
