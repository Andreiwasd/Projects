#include "Meciuri.h"
#include "ArboreB.h"
//int main()
int main(int argc, char **argv)
{
    /*ifstream fi;
    string inifile = "d.in";
    fi.open(inifile.c_str(), ios::in);

    ofstream fo;
    string outfile = "r.out";
    fo.open(outfile.c_str(), ios::app);*/

    ifstream fc(argv[1]);
    ifstream fi(argv[2]);
    ofstream fo(argv[3]);

    int c[6];
    for (int i = 0; i < 6; i++)
        fc >> c[i];

    Lista_Echipe l(fi);

    if (c[0] == 1 && c[1] == 0) 
    {
        //l.afisareLista(fo); ///afisare lista completa
        l.afisareRecursiv(fo); ///afisare lista nume echipe CERINTA 1
    }
    else 
    {
        if (c[1] == 1 && c[2] == 0) 
        {
            l.removeNechipe();
            l.afisareRecursiv(fo); //afisare lista dupa prima eliminare CERINTA 2
        }
    
        else if (c[0] == 1 && c[1] == 1 && c[2] == 1 && c[3] == 0) 
        {
            l.removeNechipe();
            l.afisareRecursiv(fo);
            Meciuri m(l.getLista(), l.getNr_echipe());
            m.campionat(fo, 0);
        }

        else if (c[0] == 1 && c[1] == 1 && c[2] == 1 && c[3] == 1 && c[4] == 0)
        {
            l.removeNechipe();
            l.afisareRecursiv(fo);
            Meciuri m(l.getLista(), l.getNr_echipe());
            m.campionat(fo, 1);
        }
    }
    fo.close();
    fi.close();
    fc.close();
    
    return 0;
}