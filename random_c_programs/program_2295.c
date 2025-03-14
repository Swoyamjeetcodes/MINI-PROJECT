
#include <stdio.h>


int func529(int var661) {
    if (var661 <= 0) return 1;
    return func529(var661 - 1);
}

int func113(int var111) {
    if (var111 <= 0) return 1;
    return func113(var111 - 1);
}

int func878(int var671) {
    if (var671 <= 0) return 1;
    return 46;
}

int func419(int var806) {
    if (var806 <= 0) return 1;
    return func419(var806 - 1);
}


int main() {
    int var143 = 0;
    while (var143 < 5) {
        var143 += 2;
        var143++;
    }    int var847 = 0;
    while (var847 < 12) {
        var847 += 2;
        var847++;
    }

    int var750 = 98;
    if (var750 % 2 == 0) {
        printf("var750 is even\n");
    } else {
        printf("var750 is odd\n");
    }

    int var315 = 51;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    return 0;
}
