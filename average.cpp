#include<iostream>
using namespace std;
 int main(int argc,char *argv[]){
 double sum = 0,avg = 0;
      for(int i = 0;i < argc-1;i++){
         sum  += atoi(argv[i+1]);
      }
      avg = sum/(argc-1);
      if(argc > 1){
      cout << "---------------------------------\n";
      cout << "Average of "<<argc - 1<< " numbers = " << avg <<endl;
      cout << "---------------------------------\n";
      }
      else{
      cout << "Please input numbers to find average.\n"; 
      }
      return 0 ;
 }
