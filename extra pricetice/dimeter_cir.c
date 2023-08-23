#include<stdio.h>
void dia(double x){
   printf("diameter valeue get now :%0.0lf\n",(2*x));
}
double circle(double y){
   printf("circle value get Now :%0.0lf\n",(2*3.1415*y));
}
double input(){
    double r;
    printf("--Enter radius of your circle : ");
    scanf("%lf",&r);
    return r;
}
int main(){
    
    double rr;
    rr =input();
    dia(rr);
    circle(rr);
    return 0;
}