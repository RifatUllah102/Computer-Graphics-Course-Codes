#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;

void LineBasicEqu(int X0, int Y0, int X1, int Y1){
    int m,B,X,Y;
     m = (Y1-Y0)/(X1-X0);
     B = Y0-m*X0;
    //drawpixel(X0,Y0);
    //drawpixel(X1,Y1);
    cout<<"X = " <<X0<<",Y = "<<Y0<<endl;
    cout<<"X = " <<X1<<",Y = "<<Y1<<endl;
    X = X0+1;
    while(X<X1){
            Y = m*X+B;
            /*FILE *fp;

            fp=fopen("Result.txt","w");

            fprintf(fp,"d = %d\n",d);
            fprintf(fp,"X = %d\n",X);
            fprintf(fp,"Y = %d\n",Y);

            fclose(fp);*/

            //drawpixel(X,round(Y));

            cout<<"X = " <<X<<",Y = "<<Y<<endl;
            X++;
    }
}

void LineDDA(int X0, int Y0, int X1, int Y1){
    int m,B,X,Y;
     m = (Y1-Y0)/(X1-X0);
    //drawpixel(X0,Y0);
    //drawpixel(X1,Y1);
    cout<<"X = " <<X0<<",Y = "<<Y0<<endl;
    cout<<"X = " <<X1<<",Y = "<<Y1<<endl;
    X = X0+1;
    Y = Y0;
    while(X<X1){
            Y = Y+m;
            //drawpixel(X,round(Y));

            cout<<"X = " <<X<<",Y = "<<Y<<endl;
            X++;
    }
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

    LineBasicEqu(x0,y0,x1,y1);
    LineDDA(x0,y0,x1,y1);

return 0;
}
