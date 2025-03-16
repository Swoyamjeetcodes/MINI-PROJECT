
#include <stdio.h>


int func899(int var974) {
    if (var974 <= 0) return 1;
    return func899(var974 - 1);
}


int main() {
    int var189 = 0;
    while (var189 < 10) {
        var189 += 3;
        var189++;
    }

    int var265 = 11;
    if (var265 % 2 == 0) {
        printf("var265 is even\n");
    } else {
        printf("var265 is odd\n");
    }

    return 0;
}
