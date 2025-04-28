#include <iostream>
using namespace std;

class Planet
    {
    private:
           float gravitasi;
    public:
       string nama;
       float diameter;

       void displayData()
         {
            cout << "gravitasiku " << gravitasi << endl;
         }  

    void inputdata(){
        cout << "Input nama : ";
        cin >> nama;
        cout << "ukuranku : ";
        cin >> diameter;
        cout << "gravitasiku : ";
        cin >> gravitasi;
    }

};
int main()
{
    Planet venus ; 
    venus.inputdata();
    cout << "namanya adalah " << venus.nama << endl;
    cout << "diameter adalah " << venus.diameter << endl;

    venus.displayData();

}