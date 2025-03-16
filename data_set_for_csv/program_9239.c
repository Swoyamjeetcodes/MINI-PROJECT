
#include <stdio.h>


int func776(int var173) {
    if (var173 <= 0) return 1;
    return func776(var173 - 1);
}

int func273(int var29) {
    if (var29 <= 0) return 1;
    return func273(var29 - 1);
}


int main() {
    int var365 = 0;
    while (var365 < 18) {
        var365 += 5;
        var365++;
    }

    int var403 = 21;
    if (var403 % 2 == 0) {
        printf("var403 is even\n");
    } else {
        printf("var403 is odd\n");
    }

    int var430 = 10;
    if (var430 % 2 == 0) {
        printf("var430 is even\n");
    } else {
        printf("var430 is odd\n");
    }

    return 0;
}
