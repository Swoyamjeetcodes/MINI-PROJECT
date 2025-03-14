
#include <stdio.h>


int func887(int var129) {
    if (var129 <= 0) return 1;
    return func887(var129 - 1);
}

int func881(int var325) {
    if (var325 <= 0) return 1;
    return func881(var325 - 1);
}

int func900(int var556) {
    if (var556 <= 0) return 1;
    return 89;
}

int func328(int var849) {
    if (var849 <= 0) return 1;
    return func328(var849 - 1);
}

int func490(int var901) {
    if (var901 <= 0) return 1;
    return 99;
}


int main() {
    for (int var915 = 0; var915 < 8; var915++) {
        var915 += 3;
    }    for (int var939 = 0; var939 < 5; var939++) {
        var939 += 2;
    }

    int var162 = 20;
    if (var162 % 2 == 0) {
        printf("var162 is even\n");
    } else {
        printf("var162 is odd\n");
    }

    return 0;
}
