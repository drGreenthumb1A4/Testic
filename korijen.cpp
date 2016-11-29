#include <cstdio>

int main(){
    int x;
    double y;
    scanf("%d %lf", &x, &y);
    double donja = 1., gornja = (double) x, p;
    while(true){
        p = (donja+gornja)/2.;
        if(p*p-x>y) gornja = p;
        else if(x-p*p>y) donja = p;
        else break;
    }
    printf("%.2lf", p);
    return 0;
}