//
// Created by Lachezar on 14.7.2020 г..
//

#ifndef PROJECT_AUTOMAT_DETERMINATEFINITEAUTOMATONINT_H
#define PROJECT_AUTOMAT_DETERMINATEFINITEAUTOMATONINT_H

#include <ostream>
#include "DeterminateFiniteAutomaton.h"
#include "State.h"

template< typename T>
class DeterminateFiniteAutomatonInt : public DeterminateFiniteAutomaton{
public:
    DeterminateFiniteAutomatonInt( );
    DeterminateFiniteAutomatonInt(int );
    DeterminateFiniteAutomatonInt(const DeterminateFiniteAutomatonInt &);
    DeterminateFiniteAutomatonInt& operator=(const DeterminateFiniteAutomatonInt&);
    virtual ~DeterminateFiniteAutomatonInt( );

    State currentState();

private:
   T *arr;

};

std::ostream &operator<<( std::ostream &os, const DeterminateFiniteAutomatonInt<T> &anInt );//todo

template< typename T > DeterminateFiniteAutomatonInt<T>::DeterminateFiniteAutomatonInt( ) { }//todo

template< typename T>DeterminateFiniteAutomatonInt<T>::DeterminateFiniteAutomatonInt( int ) {}//todo

template< typename T>DeterminateFiniteAutomatonInt<T>::~DeterminateFiniteAutomatonInt( ) {}//todo

template< typename T>DeterminateFiniteAutomatonInt<T>::DeterminateFiniteAutomatonInt( const DeterminateFiniteAutomatonInt<T> & ) {}//todo

template< typename T>DeterminateFiniteAutomatonInt<T>& DeterminateFiniteAutomatonInt<T>::operator=( const DeterminateFiniteAutomatonInt<T> & rhs) {

    return *this;
}//todo
template< typename T >
State DeterminateFiniteAutomatonInt< T >::currentState( ) {
    return State( nullptr, 0, 0 );//todo
}
#endif //PROJECT_AUTOMAT_DETERMINATEFINITEAUTOMATONINT_H
