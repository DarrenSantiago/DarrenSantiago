#include <iostream>
using namespace std;
int main()
{
  /*
  jika nilai >= 90 sangat memuaskan
  jika nilai >= 80 memuaskan
  jika nilai >= 75 cukup
  nilai = 100
  
  
  
  
    */
    int nilai;
    cout<<"sangat memuaskan; = ";cin>>nilai;
    
    if (nilai >= 90) {
        cout<<"sangat memuaskan";
    }
    else if (nilai >= 80) {
        cout<<"memuaskan";
    }
    else if (nilai >= 75) {
        cout<<"tidak tulus";
    }
}

