#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;

void LineMidPoint(int X0, int Y0, int X1, int Y1){
    int X,Y;
    int dx = X1-X0;//b
    int dy = Y1-Y0;//a
    int d = 2*dy-dx;//F(Minitial)=2(a+0.5b)
    int incrE = 2*dy;//2a
    int incrNE = 2*(dy-dx);//2(a+b)
    X = X0;
    Y = Y0;
    //writepixel(X,Y);
    cout<<"X = " <<X<<",Y = "<<Y<<endl;
    while(X<X1){
        if(d<=0){
            X++;
            cout<<"d = "<<d<<"\n";
            cout<<"X = " <<X<<",Y = "<<Y<<endl;
            d+=incrE;
        }
        else{
            X++;
            Y++;
            cout<<"d = "<<d<<"\n";
            cout<<"X = " <<X<<",Y = "<<Y<<endl;
            d+=incrNE;
        }
        //writepixel(X,Y);
    }
    //cout<<"X = " <<X<<",Y = "<<Y<<endl;
    //writepixel(X1,Y1);
}

int main(){
    int x0,x1,y0,y1,Ans;

    /*cout<<"Enter Value for X0:\n";
    cin>>x0;
    cout<<"Enter Value for X1:\n";
    cin>>x1;
    cout<<"Enter Value for Y0:\n";
    cin>>y0;
    cout<<"Enter Value for Y1:\n";
    cin>>y1;*/

    FILE *fp;

    fp=fopen("ComputerGraphics.txt","r");

    fscanf(fp,"%d",&x0);
    fscanf(fp,"%d",&x1);
    fscanf(fp,"%d",&y0);
    fscanf(fp,"%d",&y1);

    fclose(fp);

    LineMidPoint(x0,y0,x1,y1);

return 0;
}
