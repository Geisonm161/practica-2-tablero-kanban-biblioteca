#include "Pila.h"

Pila::Pila(): _ultimo(NULL)
{
}

void Pila::Agregar(Elemento* elemento)
{
    if(elemento != NULL)
    {
        elemento->SetSiguiente(_ultimo);
        _ultimo = elemento;
    }
}

Elemento* Pila::Extraer()
{
    Elemento* elementoExtraido = NULL;

    if(_ultimo != NULL)
    {
        elementoExtraido = _ultimo;
        _ultimo = elementoExtraido->GetSiguiente();
        elementoExtraido->SetSiguiente(NULL);
    }

    return elementoExtraido;
}
