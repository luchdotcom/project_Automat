//
// Created by Lachezar on 14.7.2020 г..
//

#ifndef PROJECT_AUTOMAT_STATE_H
#define PROJECT_AUTOMAT_STATE_H

template< typename T>
class State {
public:
    State( const char *nameState, int countState, int state );//todo
    State();//todo
    State(const State&);//todo
    State&operator=(const State &);//todo
    ~State();

private:
   T *nameState;///???
    int countState;
    int state =1;

};

template< typename T>
State<T>::State( const char *nameState, int countState, int state ) : nameState( nameState ), countState( countState ),
                                                            state( state ) { }

template< typename T >
State< T >::State( ) {

}

template< typename T >
State< T >::State( const State & ) {

}

template< typename T >
State<T> &State< T >::operator=( const State<T> & ) {
    return *this;
}

template< typename T >
State< T >::~State( ) {

}

#endif //PROJECT_AUTOMAT_STATE_H
