#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void vamoarellena (int col, int fil, float *M){
	int a,b;
	float M[fil][col];
	for (a =0; a<=fil; a++){
		for (b =0;b<=col; b++){
			M[a][b]=a+b;}
		} 
			
	}



int main(){
	int n;
	int col, fil;
    cout<<"Escriba un numero del 3 al 11"<< "\n";
    cin >> n;
    if(3<=n and n<=11)
    {
        float M[fil][col] = vamoarellena(int col, int fil);
        int col = n;
        int fil = n+2;
    }
    else
    {
    cout << "Error. El número ingresado se encuentra fuera del rango";
    }
    
    return 0;
    
}
