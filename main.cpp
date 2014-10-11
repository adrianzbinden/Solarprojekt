#include <iostream>

using namespace std;

double kapital, strompreis, sonnenenergie, val, pensions_zins, zins, eigenzins, kein_zins, rueckstellungen;
int j, z, res, ertrag;


int renditenrechner(double kapital_,double zins_,int ertrag_)
{
    j=0;
    while (kapital_>0){
        kapital_=(1+zins_)*kapital_ - ertrag_;
        j=j+1;
        }

        res=(20-j)*ertrag_;
    return j,res;
}

double zeitwert(double kapital_,double zins_)
{
    z=0;
    for (int u=1;u<=20;u++)
        {
            kapital_=kapital_+kapital_*zins_;
            val=kapital_;
        }
        return val;
}

int main()
{
    kapital=30000;
    sonnenenergie=14000;
    strompreis=0.264;
    rueckstellungen=0.03;
    pensions_zins=0.0175;
    zins=0.03;
    eigenzins=0.058;
    kein_zins=0;
    ertrag=sonnenenergie*strompreis-rueckstellungen*sonnenenergie;

    cout << "Der Preis pro kWh ist 26.4 Rappen. Aufgrund von Rückstellungen für allfällige Reperaturen wird angenommen, dass der Ertrag pro kWh 23.4 Rappen beträgt" << endl;
    cout << endl;

    zeitwert(kapital,pensions_zins);
    cout << "Der Wert des eingesetzten Kapitals in der Pensionskasse:" << endl;
    cout << "Eingesetztes Kapital = " << kapital << "  Zins bei Pensionskasse = " << pensions_zins << endl;
    cout << "Zeitwert Kapital nach 20 Jahren = " << val << endl;
    cout << "Ertrag nach 20 Jahren = " << val-kapital << endl;
    cout << "Rendite über 20 Jahre = " << (val-kapital)/val << endl;
    cout << endl;

    renditenrechner(kapital,kein_zins,ertrag);
    cout << "maximale Rendite bei Eigenkapital über 20 Jahre:" << endl;
    cout << "Anzal Jahre der Amortisation: " << j << endl;
    cout << "Ertrag in verbleibenden Jahren " << res << endl;
    cout << "Rendite bei Eigenkapital des gesamten Zeitraums " << res/kapital << endl;
    cout << endl;

    renditenrechner(kapital,eigenzins,ertrag);
    cout << "Eigenkapital mit jährlichem Bezug eines Eigenzinses: " << endl;
    cout << "Anzahl Jahre der Amortisation mit bestimmtem Eigenzins: " << j << endl;
    cout << "Die Rendite pro Jahr und Kapital ist " << eigenzins << endl;
    cout << endl;

    renditenrechner(kapital,zins,ertrag);

    cout << "Rendite bei 100% Fremdkapital:" << endl;
    cout << "Kapital = " << kapital << "  zins = " << zins << endl;
    cout << "Anzahl Jahre der Amortisation: " << j << endl;
    cout << "Gewinn in verbleibenden Jahren " << res << endl;
    cout << "Rendite des gesamten Zeitraumes bei Fremdkapital " << res/kapital << endl;
    cout << endl;
}







