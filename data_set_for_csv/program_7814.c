
#include <stdio.h>


int func267(int var200) {
    if (var200 <= 0) return 1;
    return func267(var200 - 1);
}


int main() {
    int var957 = 0;
    while (var957 < 17) {
        var957 += 5;
        var957++;
    }

    int var152 = 63;
    if (var152 % 2 == 0) {
        printf("var152 is even\n");
    } else {
        printf("var152 is odd\n");
    }

    return 0;
}
