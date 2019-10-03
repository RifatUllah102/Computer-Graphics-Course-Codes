#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    int X0,X1,Y0,Y1;
    float Slope;

    X0 = rand()%50;
    X1 = rand()%50;
    Y0 = rand()%50;
    Y1 = rand()%50;

    Slope = (Y1-Y0)/(X1-X0);
    cout<<"Slope = "<<Slope;
    cout<<"\nX0 = "<<X0;
    cout<<"\nX1 = "<<X1;
    cout<<"\nY0 = "<<Y0;
    cout<<"\nY1 = "<<Y1;

    if(Slope<=1 && Slope>=0){

        FILE *fp;
        fp = fopen("ComputerGraphics.txt","w");

        fprintf(fp,"%d\n",X0);
        fprintf(fp,"%d\n",X1);
        fprintf(fp,"%d\n",Y0);
        fprintf(fp,"%d\n",Y1);

        fclose(fp);
    }

return 0;
}
