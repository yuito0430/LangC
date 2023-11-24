#include <stdio.h>
int main(void){
    int i;
    int ans1 = 0;
    int ans2 = 0;
    for(i=1;i<9;i++){
        ans1 = 3*i;
        printf("%d\n",ans1);
    }
    while(8<i && i<17){
        ans2 = 3*i;
        printf("%d\n",ans2);
        i ++;
    }
return 0;
}