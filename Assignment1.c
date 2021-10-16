#include<stdio.h>
#include<math.h>
void subarray(int a[2],int b[2],int c[2]){
    int i;
    for(i=0;i<2;i++)
        c[i]=a[i]-b[i];
    
}
int main(){
    float area1;
    float area2;
    float total_area;
    int p[2]={2,1};
    int q[2]={3,5};
    int r[2]={-3,4};
    int s[2]={-2,-2};
    int qp[2],qr[2],sp[2],sr[2];
    subarray(q,p,qp);
    subarray(q,r,qr);
    subarray(s,p,sp);
    subarray(s,r,sr);
    float cross_qp_qr;
    cross_qp_qr= (qp[0] * qr[1])-(qp[1] * qr[0]);
    area1=fabs(0.5*cross_qp_qr);
    printf("Area of traingle pqr %f\n",area1);
    float cross_sp_sr;
    cross_sp_sr=(sp[0] * sr[1])-(sp[1] * sr[0]);
    area2=fabs(0.5*cross_sp_sr);
    printf("Area of traingle prs %f\n",area2);
    total_area=area1+area2;
    printf("Area of Quadrilateral pqrs  %f\n",total_area);
    return 0;
}