#include <cstdio>

int main(){
    int x, odd = 0;
    scanf("%d", &x);
    for(int i = 0; i<x; i++){
        int y;
        scanf("%d", &y);
        if((odd!=0 && y%2==1 && y>odd) || (odd == 0 && y%2==1)) odd = y;
    }
    if(odd) printf("%d", odd);
    else printf("SVI SU PARNI");
    return 0;
}