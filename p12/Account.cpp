//
// Created by Carlos Arbizu on 12/30/20.
//

//Recreation of the code in ClassMethods.cpp using header files for specification and separate cpp
// for implementation

#include "Account.h"
void Account::set_balance(double balance){
    this->balance = balance;
};
double Account::get_balance(){
    return balance;
};