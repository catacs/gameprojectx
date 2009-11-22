#ifndef SINGLETON_H
#define SINGLETON_H

 /** --------------------------------------------------------------------------------
--------------------------------------------------------------------------------
* @name : Singleton
* @author : CyanCrey
* @date : 20,2,2009
* @Description:
It's a very basic templatizaced singleton that itsn't perfect on proteccion but it offers the global acces
that we need.

Below you have a little tutorial:
--------------------------------------------------------------------------------
-------------------------------------------------------------------------------- **/
 
 /*
 These is an example of how to make a clase thath works with Singleton:

       1. class A : public Singleton<A>{
       2.

       3.     int datoA1, datoA2;
       4.     friend class Singleton<A>;
       5.

       6. protected:
       7.

       8.     A(){}    
       9.

      10. public:
      11.

      12.     void RellenaA (int a, int b){datoA1=a; datoA2=b;}
      13.     
      14.     int GetDatoA1(){ return datoA1;}
      15.     int GetDatoA2(){ return datoA2;}
      16.     ~A(){};
      17. };
      18.

Important things:

	* The void constructor must be protected (l.8)
	* You have to make Singleton<YourClass> class friend of the class YourClass(l.4)
	* Parametrized constructors ARE NOT USED, in it's place we use Fill functions that makes the same but there
	  aren't constructors (in the example, the RellenaA() function, l. 12)
    * YourClass Destructor must be PUBLIC(l. 16)
	* YourClass is derivated from publi Singleton<YourClass> (l. 1)


An example of how to use and their effects:

       1. void modificar(int a, int b)
       2. {
       3.     A::GetInstance().RellenaA(5,6);
       4.     Singleton<A>::GetInstance().GetDatoA1();
       5. }
       6. int main()
       7. {
       8.     A ClaseSingleton=A::GetInstance();
       9.     B ClaseNOSingleton;
      10.     cout<<"Los datos de B son: "<<    ClaseNOSingleton.GetDatoB1()<<" , "<<ClaseNOSingleton.GetDatoB2()<<endl;
      11.     cout<<"Los datos de A son: "<< ClaseSingleton.GetDatoA1()<< " , "<< ClaseSingleton.GetInstance().GetDatoA2() <<endl;
      12.     modificar(5,3);
      13.     cout<<"Los datos de A con singleton: "<< Singleton<A>::GetInstance().GetDatoA1()<< " , "<< Singleton<A>::GetInstance().GetDatoA2() <<endl;
      14.     return 0;

    }

Important things:

	* Make attencion how the class ClaseSingleton is declared, it calls to her method GetInstance() who has the acces to the constructor(l. 8)
    * We can acces her from differents manners:
	      o Whith the same variable name that we have decalsred if we are in the same context(function), like normal variable (l. 11)
          o Calling to GetInstance() method throught:
		        + The Singleton<YourClass> class (l.4)
                + The YourClase class(l. 3)
    * Make attencion, the modifications that we do at our Object in the Modificar() function alter our object and the changes are visible in the main funcion (l. 13)
	* We can make something like this for simplifycation:

    #define globalA Singleton<A>::GetInstance()

    cout<<"Los datos de A con singleton: "<< globalA.GetDatoA1()<< " , "<< globalA.GetDatoA2() <<endl;

This manner we have a cleanner code.
*/

template<class T>
class Singleton
{
    public:

        static T& GetInstance()
        {
            static T SingletonInstance; 
            return SingletonInstance;
        }

		Singleton() {}
};



#endif