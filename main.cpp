#include <iostream>
#include <sstream>


using namespace std;

class profesion
{
    protected:
        string nombre;
        int tiempo;
    public:
        profesion(){}
        profesion(string anombre, int atiempo)
        {
            nombre=anombre;
            tiempo=atiempo;
        }
        ~profesion(){}
        string getnombre(){return nombre;}
        void setnombre(string anombre){nombre=anombre;}

        int gettiempo(){return tiempo;}
        void settiempo(int atiempo){ tiempo=atiempo;}

        string tostring(){
            stringstream stm;
            stm<<"\nmonbre: "<<nombre<<"\ntiempo de estudio: "<<tiempo;
            return stm.str();

        }

};

class musico : public profesion
{
private:
    string instrumento;
    string genero;
    int edad;

public:
    musico(string anombre, int atiempo, string ainstrumento,string agenero, int aedad)
        :profesion(anombre,atiempo)
    {
        nombre=anombre;
        tiempo=atiempo;
        edad=aedad;
        instrumento=ainstrumento;
        genero=agenero;

    }
    ~musico(){}
    string getinstrumento(){return instrumento;}
    void setinstrumento(string ainstrumento){instrumento=ainstrumento;}

    string getgenero(){return genero;}
    void setgenero(string agenero){genero=agenero;}

    int getedad(){return edad;}
    void setedad(int aedad){edad=aedad;}

    string  tostring()
    {
        stringstream stm;
        cout<<"\nnombre: "<<nombre<<"\nedad: "<<edad
            <<"\ninstrumento de especialidad: "<<instrumento<<"\nespecialidad de genero: "<<genero
            <<"\naños de estudio: "<<tiempo;

            return stm.str();

    }


};

int main()
{
    musico musico1("angel",5,"violin", "clasica",18 );
    cout <<musico1.tostring();


    return 0;
}
