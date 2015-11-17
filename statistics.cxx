#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Random(double* a, const int N){
  for(int i=0; i<N; i++){
    a[i]= ((double)rand()/RAND_MAX);
  }}
void mv(double* a,const int N, double& m,double& v){
  m=0.0;
  v=0.0;
  for(int i=0; i<N; i++){
    m+=(1.0/N)*a[i];}
    
  for(int i=0; i<N; i++){
    v+=(1.0/N)*(a[i]-m)*(a[i]-m);}
    
}

  
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------

int main(){
   const int N = 100;
   double p[N];
   double mean, var;

  srand(time(NULL));
  Random(p, N);
  mv(p,N,mean,var);
  
   // Some lines here....

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
