#include <iostream>
using namespace std;

int main()
{
    int hasil;
    cout<<"masukan nilai akhir";cin>>hasil;
    if(hasil>100) {
        cout>>"masukan_nilai_akhir lebih dari 100";
    }
    int a;
    cout<<"masukan nilai tugas = ";cin>>a;
    if (a>100) {
       cout>>"nilaI_tugas lebih dari 100";
       return 0;
    }
    int b;
    cout<<"masukan nilai uts = ";cin>>b;
    if (b>100) {
       cout<<"nilai_uts lebih dari 100";
       return 0;
    }
    int c;
    cout<<"masukan nilai uas = ";cin>>c;
    if (c>100) {
        cout<<"nilai_uas lebih dari 100";
        return 0;
    }
    cout<<(a*0,3) + (b*0,3) + (c*0,4);
    
}
