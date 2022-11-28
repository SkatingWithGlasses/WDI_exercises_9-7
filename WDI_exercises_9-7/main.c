#include <stdio.h>
#include <stdlib.h>

int get_x() {
	int x, logic = 0;

	printf("\nPodaj  liczbe do wczytania  ");
	logic = scanf_s("%d", &x);//for remove C6031 warning about returned memory from scanf_s (couse scanf gives: C4996)

	x = (logic != 0) ? x : -1;//if scanf failed than put n as -1


	return x;

}

struct numbs{

int one,two;

};

struct numbs max2(int *x ){
int m1,m2,a;
    for(int i=0; i<x;i++){
        printf("Podaj %d liczbe: ",i+1);
            scanf("%d",&a);
        if(i==0) m1=a;
        if(i==1) m2=a;
        if(m1>m2){//swap
             m1=m1-m2;
             m2=m1+m2;
             m1=m2-m1;
        }


        if(a>m1 && a>m2){
                m1=m2; m2=a;
                }
        if(a>m1){
                m1=a;
            }

    }
        struct numbs result;
    result.one=m1;
    result.two=m2;
    printf("\nNajwieksze liczby to: %d, %d",result.one,result.two);
    return result;
};


int main()
{
    int x=-1;
    while(x<1) x = get_x();

    max2(x);


    return 0;
}
