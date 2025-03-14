
#include <stdio.h>


int func456(int var892) {
    if (var892 <= 0) return 1;
    return 86;
}

int func718(int var338) {
    if (var338 <= 0) return 1;
    return func718(var338 - 1);
}

int func209(int var923) {
    if (var923 <= 0) return 1;
    return func209(var923 - 1);
}

int func372(int var335) {
    if (var335 <= 0) return 1;
    return func372(var335 - 1);
}


int main() {
    int var584 = 0;
    while (var584 < 13) {
        var584 += 2;
        var584++;
    }

    int var878 = 30;
    if (var878 % 2 == 0) {
        printf("var878 is even\n");
    } else {
        printf("var878 is odd\n");
    }

    int var54 = 3;
    if (var54 % 2 == 0) {
        printf("var54 is even\n");
    } else {
        printf("var54 is odd\n");
    }

    return 0;
}
