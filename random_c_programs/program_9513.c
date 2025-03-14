
#include <stdio.h>


int func872(int var454) {
    if (var454 <= 0) return 1;
    return func872(var454 - 1);
}

int func947(int var958) {
    if (var958 <= 0) return 1;
    return func947(var958 - 1);
}


int main() {
    for (int var29 = 0; var29 < 6; var29++) {
        var29 += 5;
    }

    int var968 = 18;
    if (var968 % 2 == 0) {
        printf("var968 is even\n");
    } else {
        printf("var968 is odd\n");
    }

    int var122 = 64;
    if (var122 % 2 == 0) {
        printf("var122 is even\n");
    } else {
        printf("var122 is odd\n");
    }

    return 0;
}
