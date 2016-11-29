#include <cstdio>

int main(){
    int x;
    scanf("%d", &x);
    printf("%d", x);
    int suma = 0;
    while(x>0){
        printf("%d", x%10);
        suma += x%10;
        x /= 10;
    }
    printf("\n");
    printf("%d", suma*2);
    return 0;
}