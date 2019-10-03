#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<math.h>

using namespace std;

void EllipsePoints(int x,int y, int value){
    cout<<"X: "<<x<<"\n";
    cout<<"Y: "<<y;
    cout<<"\nValue : "<<value<<"\n";

    /*WritePixel(x,y);
    WritePixel(x,-y);
    WritePixel(-x,y);
    WritePixel(-x,-y);*/
}

void MidpoitntEllipse(int a, int b, int value){ //Assumes center of ellipse at the origin.
    double d2;                                  //Note that overflow may occur for 16 bit integers because of the squares.

    int x = 0;
    int y = b;
    double d1 = (b*b)-(a*a*b)+(0.25*a*a);

    EllipsePoints(x,y,value); //The 4-way symmetrical WritePixel.

    // Test gradient if still in region 1
    while((((a*a)*(y-0.5))>((b*b)*(x+1)))){    //Region 1
        if(d1<0){
            d1+=(b*b)*(2*x+3);
        }
        else{
            d1+=((b*b)*(2*x+3))+((a*a)*(-2*y+2));
            y--;
        }
        x++;
        EllipsePoints(x,y,value);
    }
    //REGION 2
    d2 = sqrt(b)*sqrt(x+0.5)+sqrt(a)*sqrt(y-1)-(sqrt(a)*sqrt(b));

    while(y>0){
        if(d2<0){
             d2+=((b*b)*(2*x+2))+((a*a)*(-2*y+3));
             x++;
        }
        else
            d2+=((a*a)*(-2*y+3));
        y--;
        EllipsePoints(x,y,value);
    }
}

int main(void){
    int x,y,z;
    cout<<"Enter the value for X : ";
    cin>>x;
    cout<<"Enter the value for Y : ";
    cin>>y;

    cout<<"Enter the value for Value : ";
    cin>>z;

    MidpoitntEllipse(x,y,z);
    return 0;
}
