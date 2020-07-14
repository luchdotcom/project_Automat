//
// Created by Lachezar on 14.7.2020 г..
//

#ifndef PROJECT_AUTOMAT_STATE_H
#define PROJECT_AUTOMAT_STATE_H

template< typename T>
class State {
public:
    State( int *nameState, int countState, int state );

private:
    int *nameState;
    int countState;
    int state =1;

};

template< typename T>State<T>::State( int *nameState, int countState, int state ) : nameState( nameState ), countState( countState ),
                                                            state( state ) { }
#endif //PROJECT_AUTOMAT_STATE_H
