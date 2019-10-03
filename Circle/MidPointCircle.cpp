#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;

void draweightpoint(int X, int Y){
    /*drawPixel(X,Y);
    drawPixel(Y,X);
    drawPixel(Y,-X);
    drawPixel(X,-Y);
    drawPixel(-X,-Y);
    drawPixel(-Y,-X);
    drawPixel(-Y,X);
    drawPixel(-X,Y);*/
}

void MidPointCircle(int R){
    int d = 1-R;
    int x = 0;
    int y = R;
    while(x<y){
        if(d<0){
            cout<<"d = "<<d<<"\n";
            cout<<"X = " <<x<<",Y = "<<y<<endl;
            d=d+(2*x)+3;
            x++;

        }
        else{
            cout<<"d = "<<d<<"\n";
            cout<<"X = " <<x<<",Y = "<<y<<endl;
            d=d+(2*x)-(2*y)+5;
            x++;
            y--;

        }
        draweightpoint(x,y);
    }
}

int main(){
    int R;

    cout<<"Enter Value for radius R:\n";
    cin>>R;

    /*FILE *fp;

    fp=fopen("ComputerGraphics.txt","r");

    fscanf(fp,"%d",&x0);
    fscanf(fp,"%d",&x1);
    fscanf(fp,"%d",&y0);
    fscanf(fp,"%d",&y1);

    fclose(fp);*/

    MidPointCircle(R);

return 0;
}
