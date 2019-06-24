#include <string>
#include <iostream>
#include <fstream>
#include <sculptor.h>
#include <cstdlib>
#include <vector>
#include <mainwindow.h>

using namespace std;

Sculptor::Sculptor(int tx, int ty, int tz){
    nx=tx; ny=ty; nz=tz;
    v= new Voxel**[nx];
    if(v == nullptr){
        exit(0);
    }

    v[0]= new Voxel*[nx*ny] ;
    if(v[0] == nullptr){
        exit(0);
    }
    v[0][0]= new Voxel[nx*ny*nz];
    if(v[0][0]==nullptr){
        exit(0);
    }

    for (int i=0;i<nx;i++){
        if(i<(nx-1)){
            v[i+1]=v[i]+ny;
        }
        for (int j=0;j<ny;j++){
            if(j==ny-1&&i!=(nx-1)){
                v[i+1][0]=v[i][j]+nz;
            }
            else{
                v[i][j+1]=v[i][j]+nz;
            }

            for(int k=0;k<nz;k++){
                v[i][j][k].r=0.0;
                v[i][j][k].g=0.0;
                v[i][j][k].b=0.0;
                v[i][j][k].a=0.0;
                v[i][j][k].isOn=false;
            }
        }
    }
}
Sculptor::~Sculptor(){
    delete [] v[0][0];
    delete [] v[0];
    delete [] v;
}

void Sculptor::setColor(float _r, float _g, float _b, float _a)
{
    if(r<0||g<0||b<0||a<0){
        exit(1);
    }
    r = _r;
    g = _g;
    b = _b;
    a = _a;
}

void Sculptor::putVoxel( int x, int y, int z)
{
    if(x>=nx||x<0||y>=ny||y<0||z>=nz||z<0){
        return;
    }
    v[x][y][z].isOn = true;
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;
}

void Sculptor::cutVoxel( int x, int y, int z)
{
    if(x>=nx||x<0||y>=ny||y<0||z>=nz||z<0){
        return;
    }
    v[x][y][z].isOn = false;
}


void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    for(int i=x0; i<=x1; i++){
        for(int j=y0; j<=y1; j++){
            for (int k=z0; k<=z1; k++) {
                putVoxel(i,j,k);
            }
        }
    }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    for(int i=x0; i<=x1; i++){
        for(int j=y0; j<=y1; j++){
            for (int k=z0; k<=z1; k++) {
                cutVoxel(i,j,k);
            }
        }
    }
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int raio)
{
    float dx,dy,dz;
    for(int i=0; i<nx; i++){
        dx=((static_cast<float>(i)-xcenter)/raio)*((static_cast<float>(i)-xcenter)/raio);
        for(int j=0; j<ny; j++){
            dy=((static_cast<float>(j)-ycenter)/raio)*((static_cast<float>(j)-ycenter)/raio);
            for (int k=0; k<nz; k++) {
                dz=((static_cast<float>(k)-zcenter)/raio)*((static_cast<float>(k)-zcenter)/raio);

                if(dx+dy+dz<=1){
                    putVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int raio)
{
    float dx,dy,dz;
    for(int i=0; i<nx; i++){
        dx=((static_cast<float>(i)-xcenter)/raio)*((static_cast<float>(i)-xcenter)/raio);
        for(int j=0; j<ny; j++){
            dy=((static_cast<float>(j)-ycenter)/raio)*((static_cast<float>(j)-ycenter)/raio);
            for (int k=0; k<nz; k++) {
                dz=((static_cast<float>(k)-zcenter)/raio)*((static_cast<float>(k)-zcenter)/raio);
                if(dx+dy+dz<=1){
                    cutVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    float dx,dy,dz;
    for(int i=0; i<nx; i++){
        dx=((static_cast<float>(i)-xcenter)/rx)*((static_cast<float>(i)-xcenter)/rx);
        for(int j=0; j<ny; j++){
            dy=((static_cast<float>(j)-ycenter)/ry)*((static_cast<float>(j)-ycenter)/ry);
            for (int k=0; k<nz; k++) {
                dz=((static_cast<float>(k)-zcenter)/rz)*((static_cast<float>(k)-zcenter)/rz);
                if(dx+dy+dz<=1){
                    putVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    float dx,dy,dz;
    for(int i=0; i<nx; i++){
        dx=((static_cast<float>(i)-xcenter)/rx)*((static_cast<float>(i)-xcenter)/rx);
        for(int j=0; j<ny; j++){
            dy=((static_cast<float>(j)-ycenter)/ry)*((static_cast<float>(j)-ycenter)/ry);
            for (int k=0; k<nz; k++) {
                dz=((static_cast<float>(k)-zcenter)/rz)*((static_cast<float>(k)-zcenter)/rz);
                if(dx+dy+dz<=1){
                    cutVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::writeOFF(const string filename)
{
    char ***check;
    check=new char**[nx];
    if(check == nullptr){
        exit(0);
    }
    check[0]= new char*[nx*ny] ;
    if(check[0] == nullptr){
        exit(0);
    }
    check[0][0]= new char[nx*ny*nz];
    if(check[0][0]==nullptr){
        exit(0);
    }
    for (int i=0;i<nx;i++){
        if(i<(nx-1)){
            check[i+1]=check[i]+ny;
        }
        for (int j=0;j<ny;j++){
            if(j==ny-1&&i!=(nx-1)){
                check[i+1][0]=check[i][j]+nz;
            }
            else{
                check[i][j+1]=check[i][j]+nz;
            }
            for(int k=0;k<nz;k++){
                check[i][j][k]='0';
            }
        }
    }

    for(int i=1;i<(nx-1);i++){
        for (int j=1;j<(ny-1);j++) {
            for(int k=1; k<(nz-1);k++){
                if(v[i-1][j][k].isOn && v[i+1][j][k].isOn && v[i][j-1][k].isOn &&
                        v[i][j+1][k].isOn && v[i][j][k-1].isOn && v[i][j][k+1].isOn){
                    check[i][j][k]='1';
                }
            }
        }
    }

    for(int i=1;i<(nx-1);i++){
        for (int j=1;j<(ny-1);j++) {
            for(int k=1; k<(nz-1);k++){
                if(check[i][j][k]=='1'){
                    v[i][j][k].isOn=false;
                }
            }
        }
    }

    delete [] check[0][0];
    delete [] check[0];
    delete [] check;

    int Nf,Nv, Nvox=0 ,nfc=0, face;
    ofstream file;
    file.open(filename);
    if(file.is_open()){
    }
    else{
        exit(1);
    }
    file<<"OFF \n";

    for (int i=0;i<nx;i++) {
        for (int j=0;j<ny;j++) {
            for (int k=0;k<nz;k++) {
                if(v[i][j][k].isOn){
                    Nvox++;
                }
            }
        }
    }

    Nf=6*Nvox;
    Nv=8*Nvox;

    file<<Nv<<" "<<Nf<<" 0 \n";

    double lowX,highX,lowY,highY,lowZ,highZ;

    for(int k=0;k<nz; k++){
        lowZ=-0.5+k;
        highZ=0.5+k;
        for(int j=0;j<ny;j++){
            lowY=-0.5+j;
            highY=0.5+j;
            for (int i=0;i<nx;i++) {
                lowX=-0.5+i;
                highX=0.5+i;
                if(v[i][j][k].isOn){
                    file<<lowX<<" "<<highY<<" "<<lowZ<<endl
                       <<lowX<<" "<<lowY<<" "<<lowZ<<endl
                      <<highX<<" "<<lowY<<" "<<lowZ<<endl
                     <<highX<<" "<<highY<<" "<<lowZ<<endl
                    <<lowX<<" "<<highY<<" "<<highZ<<endl
                    <<lowX<<" "<<lowY<<" "<<highZ<<endl
                    <<highX<<" "<<lowY<<" "<<highZ<<endl
                    <<highX<<" "<<highY<<" "<<highZ<<endl;
                }
            }
        }

    }

    for(int k=0;k<nz; k++){
        for(int j=0;j<ny;j++){
            for (int i=0;i<nx;i++) {
                if(v[i][j][k].isOn){
                    face=nfc*8;
                    file<<"4 "<<0+face<<" "<<3+face<<" "<<2+face<<" "<<1+face<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                       <<"4 "<<4+face<<" "<<5+face<<" "<<6+face<<" "<<7+face<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                      <<"4 "<<0+face<<" "<<1+face<<" "<<5+face<<" "<<4+face<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                     <<"4 "<<0+face<<" "<<4+face<<" "<<7+face<<" "<<3+face<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                    <<"4 "<<3+face<<" "<<7+face<<" "<<6+face<<" "<<2+face<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                    <<"4 "<<1+face<<" "<<2+face<<" "<<6+face<<" "<<5+face<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                    nfc++;
                }


            }
        }

    }

    file.close();
}
void Sculptor::writeVECT(const string filename)
{
    char ***check;
    check=new char**[nx];
    if(check == nullptr){
        exit(0);
    }
    check[0]= new char*[nx*ny] ;
    if(check[0] == nullptr){
        exit(0);
    }
    check[0][0]= new char[nx*ny*nz];
    if(check[0][0]==nullptr){
        exit(0);
    }

    for (int i=0;i<nx;i++){
        if(i<(nx-1)){
            check[i+1]=check[i]+ny;
        }
        for (int j=0;j<ny;j++){
            if(j==ny-1&&i!=(nx-1)){
                check[i+1][0]=check[i][j]+nz;
            }
            else{
                check[i][j+1]=check[i][j]+nz;
            }
            for(int k=0;k<nz;k++){
                check[i][j][k]='0';
            }
        }
    }

    for(int i=1;i<(nx-1);i++){
        for (int j=1;j<(ny-1);j++) {
            for(int k=1; k<(nz-1);k++){
                if(v[i-1][j][k].isOn && v[i+1][j][k].isOn && v[i][j-1][k].isOn &&
                        v[i][j+1][k].isOn && v[i][j][k-1].isOn && v[i][j][k+1].isOn){
                    check[i][j][k]='1';
                }
            }
        }
    }

    for(int i=1;i<(nx-1);i++){
        for (int j=1;j<(ny-1);j++) {
            for(int k=1; k<(nz-1);k++){
                if(check[i][j][k]=='1'){
                    v[i][j][k].isOn=false;
                }
            }
        }
    }
    delete [] check[0][0];
    delete [] check[0];
    delete [] check;

    ofstream file;
    file.open(filename);
    if(file.is_open()){
    }
    else{
        exit(1);
    }
    file<<"VECT \n";
    int  Nvox=0;
    for (int i=0;i<nx;i++) {
        for (int j=0;j<ny;j++) {
            for (int k=0;k<nz;k++) {
                if(v[i][j][k].isOn){
                    Nvox++;
                }
            }
        }
    }


    file<<Nvox<<" "<<Nvox<<" "<<Nvox<<endl;
    for(int j=0;j<2;j++){
        for (int i = 0; i< Nvox; i++){
            file<<"1 ";
        }
        file<<"\n";
    }
    for(int i = 0; i<nx; i++){
        for(int j =0 ; j < ny ; j++){
            for (int k=0; k< nz; k++){
                if(v[i][j][k].isOn){
                    file<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
    for(int i = 0; i<nx; i++){
        for(int j =0 ; j < ny ; j++){
            for (int k=0; k< nz; k++){
                if(v[i][j][k].isOn){
                    file<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                }

            }
        }
    }

    file.close();

}
std::vector<std::vector<Voxel>> Sculptor::readMx(int dim, int plano){
    vector<vector<Voxel>>matriz;
    vector<Voxel> linha;

    switch(plano)
    {
    case 1:
        linha.resize(ny);

        for(int i = 0; i<nx; i++){
            for (int j = 0; j < ny; ++j) {
                linha[j].r=v[i][j][dim].r;
                linha[j].g=v[i][j][dim].g;
                linha[j].b=v[i][j][dim].b;
                linha[j].a=v[i][j][dim].a;
                linha[j].isOn=v[i][j][dim].isOn;
            }

            matriz.push_back(linha);
        }
        break;

    case 2:
        linha.resize(nx);

        for(int i = 0; i<nz; i++){
            for (int j = 0; j < nx; ++j) {
                linha[j].r=v[j][dim][i].r;
                linha[j].g=v[j][dim][i].g;
                linha[j].b=v[j][dim][i].b;
                linha[j].a=v[j][dim][i].a;
                linha[j].isOn=v[j][dim][i].isOn;
            }

            matriz.push_back(linha);
        }
        break;

    case 3:
        linha.resize(nz);

        for(int i = 0; i<ny; i++){
            for (int j = 0; j < nz; ++j) {
                linha[j].r=v[dim][i][j].r;
                linha[j].g=v[dim][i][j].g;
                linha[j].b=v[dim][i][j].b;
                linha[j].a=v[dim][i][j].a;
                linha[j].isOn=v[dim][i][j].isOn;
            }

            matriz.push_back(linha);
        }
        break;
    }

    linha.clear();
    return matriz;
}
