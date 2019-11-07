#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void vamoarellena(int col, int fil, float **M);
void vamoaimprimi(int n,float **M);
void impri(int n,float **M);

void vamoarellena (int col, int fil, float **M){
	int a,b;
		for (b =0;b<=col; b++){
			M[a][b]=a+b;}
		} 
			
	


int main(){
	int n;
	int col, fil;
    int i;
    cout<<"Escriba un numero del 3 al 11"<< endl;
    cin >> n;
    if(3<=n and n<=11)
    {
        float ** M = new float *[n];
        for (int i = 0; i < n; ++i){
            M[i] = new float[n+2];}
            vamoarellena (int col, int fil, float **M);
            vamoaimprimi(n, **M);
    }
    else
    {
    cout << "Error. El número ingresado se encuentra fuera del rango";
    }
    
    return 0;
    
}

void vamoaimprimi(int n,float **M){
int i;
float cont=0;
for (i =0; i <n;i++) {
cout<<M[i][0]<<" ";
cont+=M[i][0];

}
}
    
void impri(int n,float **M){
int a,b;
for (a=0; a<n+2;a++) {
    for (b=0; b<n; b++) { 
        cout<<" "<<M[b][a]<<" ";
    }
    cout<<endl;
    }
    
}

