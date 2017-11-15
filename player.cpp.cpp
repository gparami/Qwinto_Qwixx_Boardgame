//
// Created by luxmy on 2017-11-14.
//

// Player
/*
The parent class Player provides functions for console input and output to a player. It should hold a
boolean to indicate if the this player is the active player. The input/output functions are pure virtual
functions and are named inputBeforeRoll and inputAfterRoll. The functions need to accept a
RollOfDice by reference. The functions will have to behave differently depending if the current Player
is active or not
 */

/*  #include <iostream>
    #include <string>
    #include <fstream>
    // rand() requires
    #include <cstdlib>
    using namespace std;

    class Person;
    istream& operator>>( istream&, Person&);
    ostream& operator<<( ostream&, const Person& );

    class Person {
        string d_lastName;
        string d_firstName;
        int d_sin;
    public:
        Person( const string& _firstName = "",
        const string& _lastName = "" );
        ~Person() {
        cout << "~Person: " << d_lastName << endl;
        }
        friend istream& operator>>( istream&, Person& );
        friend ostream& operator<<( ostream&, const Person& );
    };

    Person::Person( const string& _firstName, const string& _lastName )
        : d_firstName( _firstName ), d_lastName( _lastName ), d_sin( 0 ) {
            d_sin = rand();
            cout << "new Person" << endl;
    }

    istream& operator>>( istream& _is, Person& _p) {
        _is >> _p.d_firstName >> _p.d_lastName >> _p.d_sin;
        // check for failure
        if ( !_is ) _p = Person();
        return _is;
    }

    ostream& operator<<( ostream& _os, const Person& _p) {
        _os << _p.d_firstName << "\t" << _p.d_lastName << "\t";
        _os << _p.d_sin;
        return _os;
    }
 */


