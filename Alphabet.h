//
// Created by Lachezar on 15.7.2020 г..
//

#ifndef PROJECT_AUTOMAT_ALPHABET_H
#define PROJECT_AUTOMAT_ALPHABET_H

template< typename T>
class alphabet {
public:
    alphabet();//todo????
    alphabet(T,unsigned );//todo
    alphabet(const alphabet&);//todo
    alphabet&operator=(const alphabet& );//todo
    ~alphabet();

private:
    T alpha;
    unsigned countElement;

};

template< typename T >
alphabet< T >::alphabet( ) :alpha("no alphabet"),countElement(0){}//???

template< typename T >
alphabet< T >::alphabet( T alpha, unsigned countElement):alpha(alpha), countElement(countElement) {

}

template< typename T >
alphabet< T >::alphabet( const alphabet & rhs) {
    alpha=rhs.alpha;
    countElement=rhs.countElement;
}

template< typename T >
alphabet<T> &alphabet< T >::operator=( const alphabet & ) {
    return *this;
}

template< typename T >
alphabet< T >::~alphabet( ) {

}


#endif //PROJECT_AUTOMAT_ALPHABET_H