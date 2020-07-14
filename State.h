//
// Created by Lachezar on 14.7.2020 г..
//

#ifndef PROJECT_AUTOMAT_STATE_H
#define PROJECT_AUTOMAT_STATE_H


class State {
public:
    State( int *nameState, int countState, int state );

private:
    int *nameState;
    int countState;
    int state =1;

};


#endif //PROJECT_AUTOMAT_STATE_H
