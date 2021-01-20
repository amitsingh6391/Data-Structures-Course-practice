#include <stdio.h>


int sum(int n){
        //by using rescursion......
if(n==0){
    return 0;
}
else{
    return sum(n-1)+n;
}

}



int isum(int  n){     //by using loop

int s=0;
int i=1;
for(i=1;i<=n;i++){
    s=s+i;

}

return s;

}


int main(){
    int r,ri;
    r=sum(5);
    ri=isum(5);
    printf("%d\n %d\n",r,ri);
    return 0;
}