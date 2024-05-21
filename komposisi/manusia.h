#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class mahasiswa{
    public:
        string name;
        jantung varJantung;

        manusia(string pName): name(pName){
            cout << name << "hidup\n";
        }
        ~manusia (){
            cout << name << "mati\n"
        }
};
#endif